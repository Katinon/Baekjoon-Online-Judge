#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum = 0; cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += (2 + n) * i;
	}
	cout << sum;
}
