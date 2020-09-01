#include <iostream>
using namespace std;

bool arr[15][15] = { 0, };
int N, cnt=0;
bool check(const int& x, const int& y);
void dfs(int Q_cnt, int row);

int main() {
	cin >> N;
	dfs(0, 0);
	cout << cnt;
}

bool check(const int& x, const int& y) {
	if (x == 0) return true;
	else {
		//세로줄 검사
		int row = x, col = y;
		while (row >= 0) {
			if (arr[row][col]) return false;
			row--;
		}
		//대각선좌상단
		row = x, col = y;
		while (row >= 0 && col >= 0) {
			if (arr[row][col]) return false;
			row--, col--;
		}
		//대각선우상단
		row = x, col = y;
		while (row >= 0 && col<15) {
			if (arr[row][col]) return false;
			row--, col++;
		}

		return true;
	}
}

void dfs(int Q_cnt, int row) {
	if (Q_cnt == N) {
		cnt++;
		return;
	}

	for (int col = 0; col < N; col++) {
		if (!arr[row][col] && check(row, col)) {
			arr[row][col] = true;
			dfs(Q_cnt + 1, row + 1);
			arr[row][col] = false;
		}
	}
}
