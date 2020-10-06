#include <iostream>
#include <string>
using namespace std;

char sign[100];
int num[100];

int main() {
	string str;
	cin >> str;
	bool key = false;
	int a1 = 0, nump = 0, signp = 1;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '-' || str[i] == '+') {
			if (str[i] == '-') key = true;
			if (str[i] == '+' && key == true) {
				str[i] = '-';
			}
			sign[signp++] = str[i];
			num[nump++] = a1;
			a1 = 0;
		}
		else {
			a1 = a1 * 10 + str[i] - '0';
			if (i == str.size() - 1) num[nump] = a1;
		}
	}
	int sum = num[0];
	for (int i = 1; i < str.size(); i++) {
		if (sign[i] == '+') sum += num[i];
		else sum -= num[i];
	}
	cout << sum;
}
