#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	bool arr[21] = { 0, };
	int n, x; cin >> n;
	string str;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "add") {
			cin >> x;
			arr[x] = 1;
		}
		else if (str == "remove") {
			cin >> x;
			arr[x] = 0;
		}
		else if (str == "check") {
			cin >> x;
			cout << arr[x] << "\n";
		}
		else if (str == "toggle") {
			cin >> x;
			arr[x] = arr[x] ? 0 : 1;
		}
		else if (str == "all") {
			for (int j = 1; j < 21; j++) arr[j] = 1;
		}
		else if (str == "empty") {
			for (int j = 1; j < 21; j++) arr[j] = 0;
		}
	}
}
