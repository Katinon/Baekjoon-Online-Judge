#include <iostream>
#include <string>
#include <vector>
#include <utility>
using namespace std;
vector < pair<string, int>> vec;

void Solve(int n) {
	vec.clear();
	if (n == 0) {
		cout << "0" << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		string name, kind;
		cin >> name >> kind;
		int flag = 0;
		for (int j = 0; j < vec.size(); j++) {
			if (vec[j].first == kind) {
				flag = 1;
				vec[j].second++;
				break;
			}
		}
		if (flag == 0) vec.push_back(make_pair(kind, 1));
	}
	int result = 1;
	for (int i = 0; i < vec.size(); i++) {
		result *= vec[i].second + 1;
	}
	cout << result-1 << "\n";
	return;
}

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int n; cin >> n;
		Solve(n);
	}
	return 0;
}
