#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> dq;
	int N, M, cnt = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++)
		dq.push_back(i);

	for (int i = 0; i < M; i++) { // idx만큼 반복
		int idx, nowidx = 0; cin >> idx;

		for (int j = 0; j < dq.size(); j++) {
			if (dq[j] == idx) {
				nowidx = j;
				break;
			}
		} //해당 원소의 현재 위치 찾기

		if (dq.size() / 2 >= nowidx) {
			for (int k = 0; k < nowidx; k++) {
				dq.push_back(dq.front());
				dq.pop_front();
				cnt++;
			}
		}
		else {
			for (int k = 0; k < dq.size() - nowidx; k++) {
				dq.push_front(dq.back());
				dq.pop_back();
				cnt++;
			}
		}
		dq.pop_front();
	}
	cout << cnt;
}
