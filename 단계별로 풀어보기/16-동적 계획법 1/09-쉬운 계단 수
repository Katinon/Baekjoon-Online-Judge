#include <iostream>
#define MOD 1000000000
using namespace std;

int arr[101][10];
int main() {
	int N; cin >> N;
	arr[1][0] = 0;
	for (int i = 1; i < 10; i++)
		arr[1][i] = 1;
	for (int n = 2; n <= N; n++) {
		for (int k = 0; k < 10; k++) {
			if (k == 0) arr[n][k] = (arr[n - 1][1]) % MOD;
			else if (k == 9) arr[n][k] = (arr[n - 1][8]) % MOD;
			else arr[n][k] = (arr[n - 1][k - 1] + arr[n - 1][k + 1]) % MOD;
		}
	}
	long long sum = 0;
	for (int i = 0; i <= 9; i++) 
		sum += (arr[N][i] % MOD);
	cout << sum % MOD;
}
