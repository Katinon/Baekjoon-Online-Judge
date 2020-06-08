#include <iostream>
#include <iomanip>
using namespace std;

bool StrCheck(string str) {
	bool arr[26] = { false };
	for (int i = 0; i < str.length(); i++) {
		if (arr[str[i] - 'a'] == false) {
			arr[str[i] - 'a'] = true;
		}
		else {
			if (str[i] != str[i - 1]) return false;
		}
	}
	return true;
}

int main() {
	int count = 0, num = 0;
	string str;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (StrCheck(str)) count++;
	}

	cout << count;
}