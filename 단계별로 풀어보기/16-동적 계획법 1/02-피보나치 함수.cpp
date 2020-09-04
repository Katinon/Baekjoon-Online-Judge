#include <iostream>
using namespace std;

int arr[42];
int Fibo(int N);
int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int tmp; cin >> tmp;
		if (tmp == 0) cout << "1 0\n";
		else if (tmp == 1) cout << "0 1\n";
		else {
			cout << Fibo(tmp - 1) << " "
				<< Fibo(tmp) << "\n";
		}

	}
}

int Fibo(int N) {
	if (N <=1) return N;
	if (arr[N]) return arr[N];
	arr[N] = Fibo(N - 1) + Fibo(N - 2);
	return arr[N];
}
