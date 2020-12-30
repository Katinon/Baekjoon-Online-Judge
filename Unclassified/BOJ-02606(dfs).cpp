#include <iostream>
using namespace std;
bool computer[101];
bool map[101][101] = { 0, };
int com, n, n1, n2, cnt = 0;

void dfs(int num) {
	cnt++;
	computer[num] = 1;
	for (int i = 1; i <= com; i++) {
		if (map[num][i] && !computer[i])
			dfs(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> com >> n;
	for (int i = 0; i < n; i++) {
		cin >> n1 >> n2;
		map[n1][n2] = map[n2][n1] = 1;
	}
	dfs(1);
	cout << cnt-1;
}
