#include <iostream>
#define Swap(temp, a, b) {temp = a; a= b; b = temp;}
using namespace std;

struct Point {
	int x, y;
};
Point arr[100000];
void QuickSort(Point* arr, int start, int end);

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i].x >> arr[i].y;

	QuickSort(arr, 0, N - 1);

	for (int i = 0; i < N; i++) cout << arr[i].x << " " << arr[i].y << "\n";
}

void QuickSort(Point* arr, int start, int end) {
	Point temp;
	int pl = start;
	int pivot = start;

	if (start < end) {
		for (int i = start + 1; i <= end; i++) {
			if (arr[i].y < arr[pivot].y) {
				pl++;
				Swap(temp, arr[i], arr[pl]);
			}
			else if (arr[i].y == arr[pivot].y) {
				if (arr[i].x < arr[pivot].x) {
					pl++;
					Swap(temp, arr[i], arr[pl]);
				}
			}
		}
		Swap(temp, arr[pivot], arr[pl]);
		pivot = pl;

		QuickSort(arr, start, pivot - 1);
		QuickSort(arr, pivot + 1, end);
	}
}
