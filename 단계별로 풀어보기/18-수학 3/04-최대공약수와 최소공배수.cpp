#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, factor = 1, multiple = 0;
	cin >> a >> b;
	for (int i = 2; i <= (a > b ? b : a); i++) {
		if (a % i == 0 && b % i == 0) factor = i;
	}
	multiple = factor * (a / factor) * (b / factor);
	cout << factor << "\n" << multiple;
}
