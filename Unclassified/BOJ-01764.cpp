#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, cnt = 0; cin >> N >> M;
	vector<string> v1, v2;
	for (int i = 0; i < N; i++) {
		string str; cin >> str;
		v1.push_back(str);
	}
	sort(v1.begin(), v1.end());

	for (int j = 0; j < M; j++) {
		string str; cin >> str;
		if (binary_search(v1.begin(), v1.end(), str)) {
			cnt++;
			v2.push_back(str);
		}
	}
	sort(v2.begin(), v2.end());
	cout << cnt << "\n";
	for (int k = 0; k < cnt; k++)
		cout << v2[k] << "\n";

}