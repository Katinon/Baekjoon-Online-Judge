//Counting Sort(카운팅 정렬)
#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int cnt[10001] = { 0 };
	int n, tmp; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		cnt[tmp]++;
	}

	for (int i = 0; i < 10001; i++) {
		if (cnt[i] != 0) {
			for (int j = 0; j < cnt[i]; j++) cout << i << "\n";
		}
	}
}
