#include <iostream>
#include <cmath>
using namespace std;

void Move(int num, int x, int y) {
	if (num > 1)
		Move(num - 1, x, 6 - x - y);
	cout << x << " " << y << "\n";
	if (num > 1)
		Move(num - 1, 6 - x - y, y);
}

int main() {
	int n; cin >> n;
	cout << (int)pow(2, n) - 1 << "\n";
	Move(n, 1, 3);
}
