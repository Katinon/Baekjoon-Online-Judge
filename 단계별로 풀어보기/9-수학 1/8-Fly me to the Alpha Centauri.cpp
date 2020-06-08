#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long long ReturnCnt(long long x, long long y) {
	long long d = y - x;
	if (d == 1 || d == 2) return d;

	long long num = sqrt(d);
	if (d > num* num + num) num++;

	if (d > num* num) return num * 2;
	else return num * 2 - 1;
}

int main() {
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		long long x, y;
		cin >> x >> y;
		long long value = ReturnCnt(x, y);
		cout << value << "\n";
	}
	return 0;
}