#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	int M; cin >> M;
	for (int i = 0; i < M; i++) {
		int num; cin >> num;
		int cnt = upper_bound(v.begin(), v.end(), num) - lower_bound(v.begin(), v.end(), num);
		cout << cnt << " ";
	}
}
