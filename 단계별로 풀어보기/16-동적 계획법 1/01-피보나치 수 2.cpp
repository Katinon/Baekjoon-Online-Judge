#include <iostream>
using namespace std;

long long int fib[91];
long long int Fibonacci(int N);
int main() {
	int N; cin >> N;
	long long int result = Fibonacci(N);
	cout << result;
}

long long int Fibonacci(int N) {
	if (N <= 1) return N;
	if (fib[N]) return fib[N];
	fib[N] = Fibonacci(N - 1) + Fibonacci(N - 2);
	return fib[N];
}
