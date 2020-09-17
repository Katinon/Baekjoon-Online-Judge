#include <iostream>
#include <algorithm>
using namespace std;

int d[1001];
int arr[1001] = { 0, };
int main() {
	int N; cin >> N;
	int maxx = 0;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
		d[i]++;
		for (int j = i - 1; j >= 1; j--) {
			if (arr[i] > arr[j]) {
				d[i] = max(d[i], d[j] + 1);
			}
		}
		if (maxx < d[i]) maxx = d[i];
	}
	cout << maxx;
}
