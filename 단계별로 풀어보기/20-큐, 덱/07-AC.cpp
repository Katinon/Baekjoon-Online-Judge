#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		deque<int> dq;
		string p;
		int n, check = 0, errorchk = 0;
		cin >> p >> n;

		if (n == 0) {
			string tmp; cin >> tmp;
			int e = 1;
			for (int j = 0; j < p.size(); j++) {
				if (p[j] == 'D') {
					cout << "error\n";
					e = 0;
					break;
				}
			}
			if (e) cout << "[]\n";
			continue;
			
		}

		for (int j = 0; j < n; j++) {
			char num[9];
			for (int k = 0; k < 8; k++) {
				char tmp; cin >> tmp;
				if (tmp == '[') cin >> tmp;
				if (tmp == ',' || tmp == ']') {
					num[k] = NULL;
					break;
				}
				num[k] = tmp;
			}
			dq.push_back(stoi(num));
		}//deque에 배열 push

		for (int j = 0; j < p.size(); j++) {
			if (p[j] == 'R') {
				check = (check == 1) ? 0 : 1;
				continue;
			}
			else if (p[j] == 'D') {
				if (dq.empty()) {
					cout << "error" << "\n";
					errorchk = 1;
					break;
				}

				if (check == 0) dq.pop_front();
				else dq.pop_back();
			}
		}
		
		if (dq.empty() && errorchk == 0 ) {
			cout << "[]\n";
			continue;
		}

		if (check == 0) {
			for (int j = 0; j < dq.size(); j++) {
				if(j==0) cout << '[';
				if (j != dq.size() - 1) cout << dq[j] << ",";
				else cout << dq[j] << "]" << "\n";
			}
		}
		else {
			for (int j = dq.size() - 1; j >= 0; j--) {
				if(j==dq.size()-1) cout << '[';
				if (j != 0) cout << dq[j] << ",";
				else cout << dq[j] << "]" << "\n";
			}
		}
	}
}
