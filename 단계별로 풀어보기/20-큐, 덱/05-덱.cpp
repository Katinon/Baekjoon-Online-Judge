#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N; cin >> N;
	deque<int> dq;
	for (int i = 0; i < N; i++) {
		string tmp; cin >> tmp;
		if (tmp == "push_front") {
			int x; cin >> x;
			dq.push_front(x);
		}
		else if (tmp == "push_back") {
			int x; cin >> x;
			dq.push_back(x);
		}
		else if (tmp == "pop_front") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (tmp == "pop_back") {
			if (dq.empty()) cout << -1 << "\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (tmp == "size") {
			cout << dq.size() << "\n";
		}
		else if (tmp == "empty") {
			cout << dq.empty() << "\n";
		}
		else if (tmp == "front") {
			if (dq.empty()) cout << -1 << "\n";
			else cout << dq.front() << "\n";
		}
		else if (tmp == "back") {
			if (dq.empty()) cout << -1 << "\n";
			else cout << dq.back() << "\n";
		}
		else cout << "ERROR" << "\n";
	}
}
