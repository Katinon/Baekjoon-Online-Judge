#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c, d, e, low1, low2;
	cin >> a >> b >> c >> d >> e;

	if (a >= b) {
		low1 = (b >= c) ? c : b;
	}
	else {
		low1 = (a >= c) ? c : a;
	}

	low2 = (d >= e) ? e : d;
	cout << low1 + low2 - 50;
}