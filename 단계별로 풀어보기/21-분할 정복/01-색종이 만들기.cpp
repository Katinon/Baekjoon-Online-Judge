#include <iostream>
using namespace std;
void Merge(int pu, int pd, int pl, int pr);
int arr[128][128];
int blue_cnt = 0, white_cnt = 0;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> arr[i][j];
	} //input
	Merge(0, N - 1, 0, N - 1);
	cout << white_cnt << "\n" << blue_cnt;
}

void Merge(int pu, int pd, int pl, int pr) {
	if (pr == pl && pd == pu) {
		if (arr[pu][pl] == 1) blue_cnt++;
		else white_cnt++;
		return;
	}//가장 최소한의 정사각형 체크
	int check = 0;
	for (int i = pu; i <= pd; i++) {
		for (int j = pl; j <= pr; j++) {
			int tmp = arr[pu][pl];
			if (arr[i][j] != tmp) {
				check = 1;
				break;
			}
		}
		if (check == 1)break;
	} //check 0 or 1
	//check == 0 : square
	//check == 1 : merge
	if (check == 0) {
		if (arr[pu][pl] == 1) blue_cnt++;
		else white_cnt++;
	}
	else {
		Merge(pu, (pu + pd) / 2, pl, (pl + pr) / 2);
		Merge(pu, (pu + pd) / 2, (pl + pr) / 2 + 1, pr);
		Merge((pu + pd) / 2 + 1, pd, pl, (pl + pr) / 2);
		Merge((pu + pd) / 2 + 1, pd, (pl + pr) / 2 + 1, pr);
	}
	return;
}
