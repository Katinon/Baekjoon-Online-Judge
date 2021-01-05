#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int dd, mm, yyyy, temp, minn = 99999999, maxx=0;
	string name, oldname, youngname;
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> name >> dd >> mm >> yyyy;
		temp = yyyy * 10000 + mm * 100 + dd;
		if (minn > temp) {
			minn = temp;
			oldname = name;
		}
		if (maxx < temp) {
			maxx = temp;
			youngname = name;
		}
	}
	cout << youngname << "\n" << oldname;
}
