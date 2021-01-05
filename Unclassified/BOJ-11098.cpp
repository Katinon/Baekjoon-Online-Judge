#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str, exp_str;
	int n, p, price, maxx; cin >> n;
	for (int i = 0; i < n; i++) {
		maxx = 0;
		cin >> p;
		for (int j = 0; j < p; j++) {
			cin >> price >> str;
			if (maxx < price) {
				maxx = price;
				exp_str = str;
			}
		}
		cout << exp_str << "\n";
	}
}
