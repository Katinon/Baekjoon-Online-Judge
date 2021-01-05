#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int n, sum=0; cin >> n;
		for (int j = 0; j < n; j++) {
			int temp; cin >> temp;
			sum += temp;
		}
		cout << sum << "\n";
	}
}
