#include <iostream>
using namespace std;

int ReturnBool(int num) {
	if (num < 2) return 0;
	for (int i = 2; i*i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int m, n;
	cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (ReturnBool(i)) cout << i << "\n";
	}
}