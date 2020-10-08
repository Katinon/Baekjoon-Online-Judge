#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}

int main() {
	int arr[100];
	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	for (int i = 1; i < N; i++) {
		int gcd = GCD(arr[0], arr[i]);
		cout << arr[0] / gcd << "/" << arr[i] / gcd << "\n";
	}
}
