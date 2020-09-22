#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <pair<int, int>> vec;
int d[101], maxx = 0;
void Input(int N);

int main() {
	int N; cin >> N;
	Input(N);
	sort(vec.begin(), vec.end());
	for (int i = 1; i <= N; i++) {
		d[i]++;
		for (int j = 1; j <= N; j++) {
			if (vec[i - 1].second > vec[j - 1].second) {
				d[i] = max(d[i], d[j] + 1);
			}
		}
		if (d[i] > maxx) maxx = d[i];
	}
	cout << N - maxx;
}

void Input(int N) {
	for (int i = 1; i <= N; i++) {
		int a, b;
		cin >> a >> b;
		vec.push_back(make_pair(a, b));
	}
}
