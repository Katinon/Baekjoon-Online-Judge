#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int count = 0;
	int num, copy;
	cin >> num;
	copy = num;
	while (num != EOF) {
		count++;
		if (num < 10) {
			num = num * 10 + num;
		}
		else {
			num = (num % 10) * 10 + (num / 10 + num % 10) % 10;
		}

		if (num == copy) {
			cout << count;
			break;
		}
	}
}