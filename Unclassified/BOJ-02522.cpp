#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N-1-i; j >0; j--) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
			cout << "*";
		cout << "\n";
	}

	for (int i = 0; i < N- 1; i++) {
		for (int j = 0; j <= i; j++)
			cout << " ";
		for (int k = 0; k <N- i - 1; k++)
			cout << "*";
		cout << "\n";
	}
}
