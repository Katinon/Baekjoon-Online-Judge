#include <iostream>
#include <queue>
using namespace std;

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M, cnt = 0;
		queue<pair<int, int>> q;
		priority_queue<int> pq;
		cin >> N >> M;

		for (int j = 0; j < N; j++) {
			int tmp; cin >> tmp;
			q.push({ j, tmp });
			pq.push(tmp);
		}

		while (!q.empty()) {
			int currentIdx = q.front().first;
			int currentVal = q.front().second;
			q.pop();
			if (pq.top() == currentVal) {
				pq.pop();
				cnt++;
				if (currentIdx == M) {
					cout << cnt << "\n";
					break;
				}
			}
			else {
				q.push({ currentIdx, currentVal });
			}
		}
	}
}
