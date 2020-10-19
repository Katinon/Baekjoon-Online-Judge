#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M, cnt = 0;
		cin >> N >> M;
		vector<int> v, v_num;
		for (int i = 0; i < N; i++) {
			int tmp; cin >> tmp;
			v.push_back(tmp);
			v_num.push_back(i);
		} //input

		while (true) {
			int check = 0;
			for (int i = 1; i < v.size(); i++) {
				if (v[0] < v[i]) {
					v.push_back(v[0]);
					v.erase(v.begin());
					v_num.push_back(v_num[0]);
					v_num.erase(v_num.begin());
					check = 1;
					break;
				}
			}
			if (check == 0) {
				cnt++;
				if (v_num[0] == M) {
					cout << cnt << "\n";
					break;
				}
				else {
					v.erase(v.begin());
					v_num.erase(v_num.begin());
				}
			}
		}
	}
}
