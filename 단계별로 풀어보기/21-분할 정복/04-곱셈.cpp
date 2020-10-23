#include <iostream>
using namespace std;
long long Merge(int a, int b);
int a, b, c;
int main() {
	cin >> a >> b >> c;
	cout << Merge(a, b) % c;
}

long long Merge(int a, int b) {
	if (b == 0) return 1;
	else if (b == 1) return a;

	if (b % 2 == 1) return Merge(a, b - 1) * a;
	long long half = Merge(a, b / 2) % c;
	return (half * half) % c;
}
