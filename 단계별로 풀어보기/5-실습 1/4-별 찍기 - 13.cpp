#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		for (int j = i; j >= 1; j--) {
			cout << "*";
		}
		cout << endl;
	}

	for (int k = 1; k <= num - 1; k++) {
		for (int m = k; m < num; m++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}