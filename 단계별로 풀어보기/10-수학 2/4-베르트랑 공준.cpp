#include <iostream>
using namespace std;

int ReturnBool(int num) {
	if (num < 2) return 0;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	while (true) {
		int num, count = 0;
		cin >> num;
		if (num == 0) break;
		for (int i = num+1; i <= 2 * num; i++) {
			if (ReturnBool(i)) count++;
		}
		cout << count << "\n";
	}
}