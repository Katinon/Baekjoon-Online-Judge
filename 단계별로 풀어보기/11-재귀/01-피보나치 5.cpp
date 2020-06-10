#include <iostream>
using namespace std;

int Fibonacci(int num) {
	if (num == 0 || num == 1) return (num == 0) ? 0 : 1;
	return Fibonacci(num - 2) + Fibonacci(num - 1);
}

int main() {
	int num;
	cin >> num;
	cout << Fibonacci(num);
}