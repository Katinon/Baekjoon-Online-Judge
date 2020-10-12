#include <iostream>
#include <string>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string tmp;
		int sum = 0, flag = 1;
		cin >> tmp;
		for (int j = 0; j < tmp.size(); j++) {
			if (tmp[j] == '(') sum++;
			else if (tmp[j] == ')') sum--;

			if (sum < 0) {
				cout << "NO" << "\n";
				flag = 0;
				break;
			}
		}
		if (flag) {
			if (sum != 0) cout << "NO" << "\n";
			else cout << "YES" << "\n";
		}
	}
}
