#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt=0, score = 0;; cin >> n;
	for (int i = 0; i < n; i++) {
		bool temp; cin >> temp;
		if (temp) {
			if (!cnt) {
				score++;
				cnt++;
			}
			else {
				cnt++;
				score += cnt;
			}
		}
		else cnt = 0;
	}
	cout << score;
}
