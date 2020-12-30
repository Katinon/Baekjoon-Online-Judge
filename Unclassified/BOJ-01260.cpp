#include <iostream>
#include <queue>
using namespace std;
int N, M, V, n1, n2;
bool map[1001][1001] = { 0, };
bool b[1001] = { 0, }, d[1001] = { 0, };
queue<int> q;

void dfs(int num) {
	cout << num << " ";
	for (int i = 1; i <= N; i++) {
		if (map[i][num] && !d[i]) {
			d[i] = 1;
			dfs(i);
		}
	}
}

void bfs(int num) {
	cout << num << " ";
	q.push(num);
	while (!q.empty()) {
		int front = q.front();
		for (int i = 1; i <= N; i++) {
			if (map[front][i] && !b[i]) {
				cout << i << " ";
				b[i] = 1;
				q.push(i);
			}
		}
		q.pop();
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		cin >> n1 >> n2;
		map[n1][n2] = map[n2][n1] = 1;
	}
	b[V] = 1, d[V] = 1;
	dfs(V);
	cout << "\n";
	bfs(V);
}
