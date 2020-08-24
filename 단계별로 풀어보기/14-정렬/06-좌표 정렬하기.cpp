//퀵소트(인터넷 참조)
#include <iostream>
#define SWAP(x, y, temp) { temp = x; x = y; y = temp; }
using namespace std;

typedef struct {
	int x, y;
}point;

void QuickSort(int left, int right, point* arr) {
	int pivot = left;
	int i, j = left;
	point temp;
	if (left < right) {
		for (i = left + 1; i <= right; i++) {
			if (arr[i].x < arr[pivot].x) {
				j++;
				SWAP(arr[i], arr[j], temp)
			}
			else if (arr[i].x == arr[pivot].x) {
				if (arr[i].y < arr[pivot].y) {
					j++;
					SWAP(arr[i], arr[j], temp);
				}
			}
		}
		SWAP(arr[pivot], arr[j], temp);
		pivot = j;

		QuickSort(left, pivot - 1, arr);
		QuickSort(pivot + 1, right, arr);
	}
	

}

point arr[100000];
int main() {
	ios::sync_with_stdio(false); cin.tie(NULL);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i].x >> arr[i].y;
	}
	QuickSort(0, N - 1, arr);
	for (int i = 0; i < N; i++) {
		cout << arr[i].x << " " << arr[i].y << "\n";
	}
}
