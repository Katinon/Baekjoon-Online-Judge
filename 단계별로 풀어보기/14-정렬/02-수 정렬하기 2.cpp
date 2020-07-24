//병합정렬(MergeSort)
#include <iostream>
using namespace std;

void MergeSort(int a[], int m, int n);
void Merge(int a[], int m, int mid, int n);
int sorted[1000000], arr[1000000];

int main() {
	std::ios::sync_with_stdio(false);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int num; cin >> num;
		arr[i] = num;
	}
	MergeSort(arr, 0, N - 1);
	for (int i = 0; i < N; i++) cout << arr[i] << "\n";
}

void Merge(int a[], int m, int mid, int n) {
	int i = m, j = mid+1, k = m;

	while (i <= mid && j <= n) {
		if (a[i] <= a[j]) {
			sorted[k] = a[i];
			i++;
		}
		else {
			sorted[k] = a[j];
			j++;
		}
		k++;
	}

	if (i > mid) {
		for (int t = j; t <= n; t++) {
			sorted[k] = a[t];
			k++;
		}
	}
	else {
		for (int t = i; t <= mid; t++) {
			sorted[k] = a[t];
			k++;
		}
	}

	for (int t = m; t <= n; t++) {
		a[t] = sorted[t];
	}
}

void MergeSort(int a[], int m, int n) {
	if (m < n) {
		int middle = (m + n) / 2;
		MergeSort(a, m, middle);
		MergeSort(a, middle + 1, n);
		Merge(a, m, middle, n);
	}
}
