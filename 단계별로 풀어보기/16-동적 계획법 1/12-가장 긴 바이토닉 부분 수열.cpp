#include <iostream>
using namespace std;

int arr[1001];
int d1[1001], d2[1001];
int cnt = 0;

int main() {
	int N; cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i]; //input
		d1[i] = 1;
		d2[i] = 1; //초기화
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			if (arr[i] > arr[j]) {
				d1[i] = max(d1[i], d1[j] + 1);
			}
		}
	}

	for (int i = N; i >= 1; i--) {
		for (int j = N; j >= i; j--) {
			if (arr[i] > arr[j]) {
				d2[i] = max(d2[i], d2[j] + 1);
			}
		}
	}

	for (int i = 1; i <= N; i++) {
		if (d1[i] + d2[i] > cnt) cnt = d1[i] + d2[i];
	}
	cout << cnt - 1;
}
