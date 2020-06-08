#include <iostream>
using namespace std;

int CountCheck(int Nkg) {
	int count = 0;
	int temp = Nkg;
	for (int i = 1; i <= Nkg / 3; i++) {
		if (temp % 5 == 0) {
			count += temp / 5;
			return count;
		}
		else {
			temp -= 3;
			if (temp % 5 == 0) {
				count += temp / 5 + i;
				return count;
			}
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	cout << CountCheck(n);
}