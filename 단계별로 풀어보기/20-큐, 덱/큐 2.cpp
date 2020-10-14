#include <iostream>
#include <queue>
#include <string>
using namespace std;
queue<int> q;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		if (str == "push") {
			int tmp; cin >> tmp;
			q.push(tmp);
		}
		else if (str == "pop") {
			if (q.size()) {
				int tmp = q.front();
				cout << tmp << "\n";
				q.pop();
			}
			else cout << -1 << "\n";
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			if (q.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (str == "front") {
			if (q.size()) {
				int tmp = q.front();
				cout << tmp << "\n";
			}
			else cout << -1 << "\n";
		}
		else if (str == "back") {
			if (q.size()) {
				int tmp = q.back();
				cout << tmp << "\n";
			}
			else cout << -1 << "\n";
		}
	}
}
