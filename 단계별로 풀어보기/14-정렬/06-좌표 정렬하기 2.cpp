#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else if (a.second < b.second)
		return true;
	else
		return false;
}

int main() {
	vector <pair<int, int>> vec;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a1, a2;
		cin >> a1 >> a2;
		vec.push_back(make_pair(a1, a2));
	}
	sort(vec.begin(), vec.end(), cmp);
	for (int i = 0; i < n; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}
}
