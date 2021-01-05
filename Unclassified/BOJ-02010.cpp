#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		int temp; cin >> temp;
		if (i == n - 1) {
			sum += temp;
			break;
		}
		sum += temp - 1;
	}
	cout << sum;
}
