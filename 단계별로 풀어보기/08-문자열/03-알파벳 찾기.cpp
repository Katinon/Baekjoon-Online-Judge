#include <iostream>
using namespace std;
//a=97

int Sizeofchar(char arr[]) {
	int count = 0;
	for (int i = 0; i < 100; i++) {
		if (arr[i] == NULL) return count;
		count++;
	}
}

int main() {
	int alpa[97];
	int result[26];
	for (int i = 0; i < 26; i++) result[i] = (-1);
	for (int i = 0; i < 26; i++) {
		alpa[i] = 97 + i;
	}

	char arr[100];
	cin >> arr;
	int sz = Sizeofchar(arr);
	for (int j = 0; j < sz; j++) {
		for (int k = 0; k < 26; k++) {
			if (alpa[k] == arr[j] && result[k] == (-1)) {
				result[k] = j;
			}
		}
	}

	for (int l = 0; l < 26; l++) {
		cout << result[l] << " ";
	}
}
