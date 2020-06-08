#include <iostream>
using namespace std;

int ReturnCnt(int num) {
	int MaxCnt = 7, MinCnt = 2;
	if (num == 1) return 1;
	for (int i = 1; i < num; i++) {
		if (num >= MinCnt && num <= MaxCnt) {
			return i + 1;
		}
		MaxCnt += 6 * (i + 1);
		MinCnt += 6 * i;
	}
}

int main() {
	int num;
	cin >> num;
	cout << ReturnCnt(num);
}