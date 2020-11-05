#include <iostream>
#include <algorithm>
using namespace std;
int arr[200001];
int N, C;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> C;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);

	int left = 1;
	int right = arr[N-1];
	int ans = 0;
	while (left <= right) {
		int mid = (left + right) / 2;
		int idx = 0, cnt = 1;
		for (int i = 1; i < N; i++) {
			if (arr[i] - arr[idx] >= mid) {
				cnt++;
				idx = i;
			}
		}
		if (cnt >= C) {
			left = mid + 1;
			ans = mid;
		}
		else right = mid - 1;

	}
	cout << ans;
}
