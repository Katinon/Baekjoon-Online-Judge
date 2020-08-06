#include <iostream>
using namespace std;

void Swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void BubbleSort(int a[], int cnt) {
	for (int i = 0; i < cnt - 1; i++) {
		for (int j = 0; j < cnt - 1 - i; j++) 
			if (a[j] < a[j + 1]) Swap(&a[j], &a[j + 1]);
	}
}

int main() {
	int a, cnt=0; cin >> a;
	int arr[10], temp = a;

	for (int i = 0;; i++) {
		cnt++;
		arr[i] = temp % 10;
		temp /= 10;
		if (temp == 0) break;
	}
	BubbleSort(arr, cnt);
	for (int i = 0; i < cnt; i++) cout << arr[i];
}
