#include <iostream>
using namespace std;

long long arr[101];
long long fibo(int N) {
	if (N <= 2) return 1;
	else if (N <= 4) return 2;

	if (arr[N]) return arr[N];
	arr[N] = fibo(N - 1) + fibo(N - 5);
	return arr[N];
}
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int N; cin >> N;
		long long result = fibo(N-1);
		cout << result << "\n";
	}
}
