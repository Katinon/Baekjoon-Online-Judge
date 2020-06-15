#include <iostream>
using namespace std;

char B = 'B';
char W = 'W';

int main() {
	int m, n;
	cin >> m >> n;

	char arr[51][51] = { NULL };
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	int cnt1=0, cnt2=0, min = 999999999;
	int row = 0, column = 0;
	for (int j = 0; j < m - 7; j++) { // j, k는 arr에서 8*8사이즈로 반복해야되는 횟수
		column = 0;
		for (int k = 0; k < n - 7; k++) {
			for (int a = row; a < row + 8; a++) {
				for (int b = column; b < column + 8; b++) {
					if ((a % 2 == 0 && b % 2 == 0) || (a % 2 == 1 && b % 2 == 1)) {
						if (arr[a][b] != B) cnt1++;
						if (arr[a][b] != W) cnt2++;
					}
					if ((a % 2 == 0 && b % 2 == 1) || (a % 2 == 1 && b % 2 == 0)) {
						if (arr[a][b] != W) cnt1++;
						if (arr[a][b] != B) cnt2++;
					}
				}
			}
			if (min > cnt1&& cnt1 <= cnt2) min = cnt1;
			else if (min > cnt2&& cnt2 <= cnt1) min = cnt2;
			cnt1 = 0, cnt2 = 0;
			column++;
		}
		row++;
	}
	cout << min;
}