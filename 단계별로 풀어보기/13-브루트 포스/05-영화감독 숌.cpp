#include <iostream>
using namespace std;

int ReturnNum(int N) {
	int cnt = 0, first_num = 666;
	while (true) {
		int num[7] = { 0 };
		int temp = first_num;
		for (int i = 0; i < 7; i++) {
			num[i] = temp % 10;
			temp = temp / 10;
			if (temp == 0) break;
		}
		for (int j = 0; j < 5; j++) {
			if (num[j] == 6 && num[j + 1] == 6 && num[j + 2] == 6) {
				cnt++;
				break;
			}
		}
		if (cnt == N) return first_num;
		first_num++;
		if (cnt > 10000) return -1;
	}
}

int main() {
	int N;
	cin >> N;
	cout << ReturnNum(N);
}