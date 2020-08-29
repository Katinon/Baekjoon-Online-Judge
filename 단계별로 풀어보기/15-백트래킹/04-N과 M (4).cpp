#include <iostream>
#define MAX 9
using namespace std;
int m, n;
int list[MAX];

void dfs(int cnt) {
	if (cnt == n) {
		for (int i = 0; i < n; i++) {
			cout << list[i] << " ";
			}
		cout << "\n";
		return;
	}

	for (int i = 1; i <= m; i++) {
		if (cnt == 0) {
			list[cnt] = i;
			dfs(cnt + 1);
		}
		else if (list[cnt - 1] <= i) {
			list[cnt] = i;
			dfs(cnt + 1);
		}
	}
}

int main() {
	cin >> m >> n;
	dfs(0);
}
