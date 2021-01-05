#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}

		for (int j = N-i; j >= 1; j--) {
			cout << "*";
		}
		cout << "\n";
	}
}
