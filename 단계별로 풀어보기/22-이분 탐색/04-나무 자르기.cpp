#define ll long long
#include <iostream>
#include <algorithm>
using namespace std;
ll BinarySearch(ll min_val, ll max_val);
ll N, M, arr[1000000];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);
	cout << BinarySearch(0, arr[N - 1]);
}

ll BinarySearch(ll min_val, ll max_val) {
	ll start = min_val;
	ll end = max_val;
	ll mid;
	while (start <= end) {
		ll sum = 0;
		mid = (start + end) / 2;
		for (int i = N - 1; i >= 0; i--) {
			if (arr[i] - mid > 0) sum += arr[i] - mid;
			else break;
		}
		if (sum >= M) start = mid + 1;
		else end = mid - 1;
	}
	return end;
}
