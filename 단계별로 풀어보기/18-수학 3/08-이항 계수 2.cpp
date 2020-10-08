#include <iostream>
using namespace std;

long long arr[1000][1000];
long long choose(int n, int r) {
	if (arr[n][r]) return arr[n][r];
	if (n == r || r == 0) return arr[n][r] = 1;
	return arr[n][r] = (choose(n - 1, r - 1) + choose(n - 1, r))%10007;
}


int main() {
	int N, K;
	cin >> N >> K;
	cout << choose(N, K);
}
