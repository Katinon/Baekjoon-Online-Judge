#include <iostream>
using namespace std;
char arr[64][64];

void Input(int N);
void Merge(int pu, int pd, int pl, int pr);

int main() {
	int N; cin >> N;
	Input(N);
	Merge(0, N - 1, 0, N - 1);
}

void Input(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	}
}

void Merge(int pu, int pd, int pl, int pr) {
	
	if (pd == pu && pr == pl) {
		cout << arr[pu][pl];
	}
	else {
		char tmp = arr[pu][pl];
		int check = 0;
		for (int i = pu; i <= pd; i++) {
			for (int j = pl; j <= pr; j++) {
				if (tmp != arr[i][j]) {
					check = 1;
					break;
				}
			}
			if (check == 1) break;
		}

		if (check == 0) cout << tmp;
		else {
			cout << "(";
			Merge(pu, (pu + pd) / 2, pl, (pl + pr) / 2);
			Merge(pu, (pu + pd) / 2, (pl + pr) / 2 + 1, pr);
			Merge((pu + pd) / 2 + 1, pd, pl, (pl + pr) / 2);
			Merge((pu + pd) / 2 + 1, pd, (pl + pr) / 2 + 1, pr);
			cout << ")";
		}
	}
	return;
}
