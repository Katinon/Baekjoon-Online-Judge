#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long BinarySearch(long long pl, long long pr);
vector<int> v;
long long K, N;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> K >> N;
	for (int i = 0; i < K; i++) {
		long long tmp; cin >> tmp;
		v.push_back(tmp);
	}//input
	sort(v.begin(), v.end());
	cout << BinarySearch(1, v[v.size()-1]);
}

long long BinarySearch(long long pl, long long pr) {
	long long start = pl;
	long long end = pr;
	while (start <= end) {
		long long mid = (start + end) / 2;
		long long cnt = 0;
		for (int i = 0; i < v.size(); i++) {
			cnt += v[i] / mid;
		}
		if (cnt < N) end = mid - 1;
		else {
			start = mid+1;
		}
	}
	return end;
}
