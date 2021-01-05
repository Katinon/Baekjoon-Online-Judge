#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str1[3], str2[3];
	getline(cin, str1[0], ':');
	getline(cin, str1[1], ':');
	cin >> str1[2];
	getline(cin, str2[0], ':');
	getline(cin, str2[1], ':');
	cin >> str2[2];

	int s = stoi(str2[2]) - stoi(str1[2]);
	int m = stoi(str2[1]) - stoi(str1[1]);
	int h = stoi(str2[0]) - stoi(str1[0]);

	if (s < 0) {
		m--;
		s += 60;
	}
	if (h < 0) {
		h += 24;
	}
	if (m < 0) {
		h--;
		m += 60;
	}

	if (h < 10) cout << 0 << h;
	else cout << h;
	cout << ":";
	if (m < 10) cout << 0 << m;
	else cout << m;
	cout << ":";
	if (s < 10) cout << 0 << s;
	else cout << s;

}
