#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector <pair<int, int>> vec;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int p1, p2;
		cin >> p1 >> p2;
		vec.push_back(make_pair(p1, p2));
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i < N; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}
}
