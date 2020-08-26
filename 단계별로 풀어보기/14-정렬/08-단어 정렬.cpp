#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else {
		return a.size() < b.size();
	}
}

int main() {
	int N; cin >> N;
	vector<string> vec;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		vec.push_back(temp);
	}
	sort(vec.begin(), vec.end(), compare);
	string temp2;
	for (int i = 0; i < N; i++) {
		if (temp2 != vec[i]) {
			cout << vec[i] << "\n";
			temp2 = vec[i];
		}
		else continue;
	}
}
