#include <iostream>
using namespace std;

bool Check(int n1, int n2, int arr[][50]) {
	return arr[n1][n2] ? 1 : 0;
}

void dfs(int n1, int n2, int arr[][50]) {
	arr[n1][n2] = 0;
	if (n1 - 1 >= 0 && Check(n1 - 1, n2, arr)) dfs(n1 - 1, n2, arr);
	if (n1 + 1 < 50 && Check(n1 + 1, n2, arr)) dfs(n1 + 1, n2, arr);
	if (n2 - 1 >= 0 && Check(n1, n2 - 1, arr)) dfs(n1, n2 - 1, arr);
	if (n2 + 1 < 50 && Check(n1, n2 + 1, arr)) dfs(n1, n2 + 1, arr);
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int M, N, K, cnt = 0, arr[50][50] = { 0, };
		cin >> M >> N >> K;

		for (int j = 0; j < K; j++) {
			int n1, n2; cin >> n1 >> n2;
			arr[n1][n2] = 1;
		}//input 1 in arr

		for (int a = 0; a < M; a++) {
			for (int b = 0; b < N; b++) {
				if (arr[a][b]) {
					dfs(a, b, arr);
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}
