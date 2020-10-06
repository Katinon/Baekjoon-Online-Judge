#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, arr[1001];
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		arr[i] = temp;
	}
	sort(arr, arr + N);

	int sum = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			sum += arr[j];
		}
	}
	cout << sum;
}
