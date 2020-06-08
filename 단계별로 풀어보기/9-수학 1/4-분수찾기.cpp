#include <iostream>
using namespace std;

void ReturnCnt(int num) {
	int cnt = 1;
	int a = 0, b = 0;
	if (num == 1) cout << 1 << "/" << 1;
	for (int i = 1; i < num; i++) {
		cnt += i;
		if (num >= cnt && num <= cnt + i) {
			a = 1;
			b = i + 1;
			do {
				if (cnt == num && i % 2 == 1) {
					cout << a << "/" << b;
					return;
				}
				else if (cnt == num && i % 2 != 1) {
					cout << b << "/" << a;
					return;
				}
				a++, b--, cnt++;
			} while (true);
		}
	}
}

int main() {
	int num;
	cin >> num;
	ReturnCnt(num);
}