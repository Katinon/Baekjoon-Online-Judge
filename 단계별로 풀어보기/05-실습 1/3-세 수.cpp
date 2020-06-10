#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a, b, c, mid;
	cin >> a >> b >> c;
	if (a >= b) {
		mid = (b >= c) ? b : (a >= c) ? c : a;
	}
	else {
		mid = (a >= c) ? a : (b >= c) ? c : b;
	}
	cout << mid;
}