#include <iostream>
using namespace std;
int main() {
	int min, max, MIN=0, sum = 0;
	cin >> min >> max;
	for (int i = min; i <= max; i++) {
		int temp = 0;
		if (i == 1) continue;
		if (i == 2) {
			sum += i;
			MIN = i;
			continue;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0) temp = 1;
		}
		if (temp == 0) {
			sum += i;
			if (MIN == 0) MIN = i;
		}
	}
	if (sum == 0) cout << -1;
	else {
		cout << sum << "\n" << MIN;
	}
}