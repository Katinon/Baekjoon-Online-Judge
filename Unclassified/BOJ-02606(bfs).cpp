#include <iostream>
#include <queue>
using namespace std;
int com, n, n1, n2, cnt=0;
bool computer[101];
bool map[101][101] = { 0, };
queue<int> q;

void bfs(int num) {
	q.push(num);
	computer[num] = 1;
	while (!q.empty()) {
		int fro = q.front();
		q.pop();
		
		for (int i = 1; i <= com; i++) {
			if (map[fro][i] && !computer[i]) {
				q.push(i);
				computer[i] = 1;
				cnt++;
			}
		}
	}
}

int main() {
	
	cin >> com >> n;
	for (int i = 0; i < n; i++) {
		cin >> n1 >> n2;
		map[n1][n2] = map[n2][n1] = 1;
	}
	bfs(1);
	cout << cnt;
}
