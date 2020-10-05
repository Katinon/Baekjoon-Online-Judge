#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector <pair<int, int>> vec;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}
	sort(vec.begin(), vec.end(), cmp);

	int tmp = vec[0].second;
	int cnt = 1;
	for (int i = 1; i < N; i++) {
		if (tmp <= vec[i].first) {
			cnt++;
			tmp = vec[i].second;
		}
	}
	cout << cnt;
}
