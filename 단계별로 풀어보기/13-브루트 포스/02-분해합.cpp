#include <iostream>
using namespace std;
int _sum(int n) {
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int ReturnNum2(int n) {
	int min = 1000001;
	for (int i = 0; i < 1000000; i++) {
		int M = (i + 1) + _sum(i + 1);
		if (M == n && min > i + 1) min = i + 1;
	}
	return (min == 1000001) ? 0 : min;
}

int main() {
	int n;
	cin >> n;
	cout << ReturnNum2(n);
}