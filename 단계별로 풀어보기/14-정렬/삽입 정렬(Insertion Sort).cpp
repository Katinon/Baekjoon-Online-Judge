//Insertion Sort(삽입 정렬)
#include <iostream>
using namespace std;

void insertion(int a[], int n) {
	int i, j;
	for (i = 1; i < n; i++) {
		int temp = a[i];
		for (j = i; j > 0 && a[j - 1] > temp; j--) {
			a[j] = a[j - 1];
		}
		a[j] = temp;
	}
}

int main() {
	const int sz = 5;
	int a[sz] = { 6,4,1,7,3 };
	insertion(a, sz);
	for (int i = 0; i < sz; i++) {
		cout << a[i] << " ";
	}
}
