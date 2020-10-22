#include <iostream>
using namespace std;
int arr[2188][2188] = { 0, };
int cnt0 = 0, cnt1 = 0, cntm1 = 0;
void Input(int N);
void Merge(int pu, int pd, int pl, int pr);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;
	Input(N);
	Merge(1, N, 1, N);
	cout << cntm1 << "\n" << cnt0 << "\n" << cnt1;
}

void Input(int N) {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			cin >> arr[i][j];
	}
}

void Merge(int pu, int pd, int pl, int pr) {
	if (pu == pd && pl == pr) {
		if (arr[pu][pl] == -1) cntm1++;
		else {
			if (arr[pu][pl] == 0) cnt0++;
			else cnt1++;
		}
		return;
	}

	int tmp = arr[pu][pl];
	int check = 0;
	for (int i = pu; i <= pd; i++) {
		for (int j = pl; j <= pr; j++) {
			if (tmp != arr[i][j]) {
				check = 1;
				break;
			}
		}
		if (check) break;
	}

	if (!check) {
		if (arr[pu][pl] == -1) cntm1++;
		else {
			if (arr[pu][pl] == 0) cnt0++;
			else cnt1++;
		}
	}
	else {
		int len = (pr - pl + 1) / 3;
		Merge(pu, pu + len - 1, pl, pl + len - 1);
		Merge(pu, pu + len - 1, pl + len, pr - len);
		Merge(pu, pu + len - 1, pr - len + 1, pr);
		Merge(pu + len, pd - len, pl, pl + len - 1);
		Merge(pu + len, pd - len, pl + len, pr - len);
		Merge(pu + len, pd - len, pr - len + 1, pr);
		Merge(pd - len + 1, pd, pl, pl + len - 1);
		Merge(pd - len + 1, pd, pl + len, pr - len);
		Merge(pd - len + 1, pd, pr - len + 1, pr);
	}
	return;
}
