#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const pair<int, string>& a, const pair<int, string>& b) {
	return a.first < b.first;
}

int main() {
	vector <pair<int, string>> vec;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int age;
		string name;
		cin >> age >> name;
		vec.push_back(make_pair(age, name));
	}
	stable_sort(vec.begin(), vec.end(), cmp);
	for (int i = 0; i < N; i++) {
		cout << vec[i].first << " " << vec[i].second << "\n";
	}
}
