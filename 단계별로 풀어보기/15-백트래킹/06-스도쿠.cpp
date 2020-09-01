#include <iostream>
#include <vector>
using namespace std;

void Input_Sudoku();
void Output_Sudoku();
void Sudoku_DFS(int row, int col);
int sudoku_arr[9][9];

int main() {
	Input_Sudoku();
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sudoku_arr[i][j] == 0)
				Sudoku_DFS(i, j);
		}
	}
}

void Input_Sudoku() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> sudoku_arr[i][j];
		}
	}
}
void Output_Sudoku() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cout << sudoku_arr[i][j] << " ";
		}
		cout << "\n";
	}
}
void Sudoku_DFS(int row, int col) {
	bool not_used_num[9] = { 0, };
	vector<int> vec_arr;
	for (int i = 0; i < 9; i++) {
		if (sudoku_arr[row][i])
			not_used_num[sudoku_arr[row][i] - 1] = 1;
	} //가로줄 검사

	for (int i = 0; i < 9; i++) {
		if (sudoku_arr[i][col])
			not_used_num[sudoku_arr[i][col] - 1] = 1;
	} //세로줄 검사

	int tmp_row = row / 3;
	int tmp_col = col / 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (sudoku_arr[tmp_row * 3 + i][tmp_col * 3 + j])
				not_used_num[sudoku_arr[tmp_row * 3 + i][tmp_col * 3 + j] - 1] = 1;
		}
	} //3X3구역 검사

	for (int i = 0; i < 9; i++) {
		if (!not_used_num[i])
			vec_arr.push_back(i + 1);
	} //배열에 빈칸에 가능한 수 push

	if (!vec_arr.size()) return;

	int next_row = row;
	int next_col = col;
	while (true) {
		if ((++next_col) == 9) {
			next_row++;
			next_col = 0;
			if (next_row == 9) {
				sudoku_arr[row][col] = vec_arr[0];
				Output_Sudoku();
				exit(0);
			}
		}
		if (next_row == 9) break;
		if (!sudoku_arr[next_row][next_col]) break;
		
	}
	for (int i = 0; i < vec_arr.size(); i++) {
		sudoku_arr[row][col] = vec_arr[i];
		Sudoku_DFS(next_row, next_col);
		sudoku_arr[row][col] = 0;
	}
}
