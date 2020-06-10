#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int k = 0; k < i; k++) {
			cout << " ";
		}
		for (int j = 0; j < (num - i) * 2 - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int l = 1; l <= num - 1; l++) {
		for (int m = 0; m <= num - 2 - l; m++) {
			cout << " ";
		}
		for (int n = 0; n < l * 2 + 1; n++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}