#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	int num;
	cin >> a >> b >> c;
	num = a / (c - b);
	if (c <= b) cout << -1;
	else cout << num + 1;
}