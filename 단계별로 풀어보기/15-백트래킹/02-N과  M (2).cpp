#include <iostream>
#define MAX 9
using namespace std;
int m, n;
bool check[MAX] = { 0, };
int list[MAX];

void dfs(int cnt, int num) {
	if (cnt == n) {
		for (int i = 0; i < n; i++) {
			cout << list[i] << " ";
			}
		cout << "\n";
		return;
	}

	for (int i = num; i <= m; i++) {
		if (!check[i]) {
			list[cnt] = i;
			check[i] = true;
			dfs(cnt + 1, i+1);
			check[i] = false;
		}
	}
}

int main() {
	cin >> m >> n;
	dfs(0, 1);
}
