#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num, a;
	int max = 0;
	int min = 0;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> a;
		if (max == 0 && min == 0) {
			max = a;
			min = a;
		}
		if (a > max) {
			max = a;
		}
		if (a < min) {
			min = a;
		}

	}

	cout << min << " " << max;
	return 0;
}