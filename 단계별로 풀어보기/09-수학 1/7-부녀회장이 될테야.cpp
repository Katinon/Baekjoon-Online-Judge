#include <iostream>
using namespace std;

int ResiNum(int k, int n, int arr[][14]) {
	return arr[k][n - 1];
}

int main() {
	int arr[15][14] = { 0 };
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 14; j++) {
			if (i == 0) arr[i][j] = j + 1;
			else {
				for (int k = 0; k <= j; k++) {
					arr[i][j] += arr[i - 1][k];
				}
			}
		}
	}

	int num, k, n;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> k >> n;
		cout << ResiNum(k, n, arr) << endl;
	}
}