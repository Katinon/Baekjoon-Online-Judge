#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int d[1001][1001] = { 0 };
int LCS(string str1, string str2) {
	for (int i = 1; i <= str1.size(); i++) {
		for (int j = 1; j <= str2.size(); j++) {
			if (str1[i-1] == str2[j-1]) {
				d[i][j] = d[i - 1][j - 1] + 1;
			}
			else {
				d[i][j] = max(d[i - 1][j], d[i][j - 1]);
			}
		}
	}
	return d[str1.size()][str2.size()];
}

int main() {
	string str1, str2;
	cin >> str1 >> str2;
	cout << LCS(str1, str2);
}
