//TIME OUT//
#include <iostream>
#include <vector>
using namespace std;
vector <int> vec_ori, vec;
vector <char> c;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		vec_ori.push_back(tmp);
	}
	int pt = 0, i = 1;
	while (i <= N) {
		int tmp = i;
		if (vec_ori[pt] >= i) {
			vec.push_back(i);
			c.push_back('+');
			i++;
		}
		
		while (vec_ori[pt] == tmp) {
			vec.pop_back();
			c.push_back('-');
			pt++, tmp--;
			if (pt >= N) break;
		}
	}
	for (int k = vec.size() - 1; k >= 0; k--) {
		if (vec[k] == vec_ori[pt]) {
			vec.pop_back();
			c.push_back('-');
			pt++;
		}
		else break;
	}
	if (vec.size() == 0) {
		for (int j = 0; j < c.size(); j++) {
			cout << c[j] << "\n";
		}
	}
	else cout << "NO";
}
