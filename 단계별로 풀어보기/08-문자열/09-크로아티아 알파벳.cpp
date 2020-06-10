#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string crtarr[8] =
	{ "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	char arr[101];
	cin >> arr;
	int word = 0;
	for (int i = 0; i < strlen(arr); i++) {
		char temp[4] = { '\0', };
		temp[0] = arr[i];
		temp[1] = arr[i + 1];
		if (arr[i + 2] == '=') temp[2] = arr[i + 2];
		for (int j = 0; j < 8; j++) {
			if (temp == crtarr[j]) {
				if (temp[2] != NULL) i = i + 2;
				else i++;
			}
		}
		word++;
	}
	cout << word;
}
