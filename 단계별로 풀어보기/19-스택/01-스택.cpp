#include <iostream>
#include <string>
using namespace std;
int arr[10000];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int pt = 0;
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		string tmp;
		cin >> tmp;
		if (tmp == "push") {
			int x; cin >> x;
			arr[pt] = x;
			pt++;
		}
		else if (tmp == "pop") {
			if (pt == 0) {
				cout << -1 << "\n";
				continue;
			}
			pt--;
			cout << arr[pt] << "\n";
			arr[pt] = 0;
		}
		else if (tmp == "size")
			cout << pt << "\n";
		else if (tmp == "empty") {
			if (pt == 0) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (tmp == "top") {
			if (pt == 0) {
				cout << -1 << "\n";
				continue;
			}
			cout << arr[pt - 1] << "\n";
		}
	}
	return 0;
}
