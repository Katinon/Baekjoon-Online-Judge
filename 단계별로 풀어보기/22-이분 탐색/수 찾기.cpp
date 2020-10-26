#include <iostream>
#include <algorithm>
using namespace std;
bool BinarySearch(int num);
int N, M, arr[100000], chk[100000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);
	cin >> M;
	for (int j = 0; j < M; j++) {
		cin >> chk[j];
		cout << BinarySearch(chk[j]) << "\n";
	}
}

bool BinarySearch(int num) {
	int start = 0;
	int end = N - 1;
	int mid;
	while (end - start >= 0) {
		mid = (start + end) / 2;
		if (arr[mid] == num) return true;
		else if (arr[mid] > num) end = mid - 1;
		else start = mid + 1;
	}
	return false;
}
