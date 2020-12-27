#include <iostream>
using namespace std;

int main() {
	int num; cin >> num;
	while (num != NULL) {
		int arr[5], len = 0, tmp = 0;
		while (num) {
			arr[len] = num % 10;
			num /= 10;
			len++;
		}
		for (int i = 0; i < len / 2; i++) {
			if (arr[i] != arr[len - 1 - i]) tmp = 1;
		}
		if (tmp == 0) cout << "yes" << "\n";
		else cout << "no" << "\n";

		cin >> num;
	}
}
