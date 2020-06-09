#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num;
	cin >> num;
	if (num == 1) {
		cout << "*";
		return 0;
	}
	for (int i = 1; i <= num * 2; i++) {
		if (i % 2 != 0) {
			for (int j = 0; j < (num + 1) / 2; j++) {
				cout << "* ";
			}
		}
		else {
			for (int k = 0; k < num / 2; k++) {
				cout << " *";
			}
		}
		cout << endl;
	}
	return 0;
}