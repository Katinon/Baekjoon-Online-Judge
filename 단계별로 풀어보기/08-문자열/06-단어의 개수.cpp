#include <iostream>
using namespace std;

int Charsize(char arr[], int n);
const int max_size = 1000000;
char str[max_size];
int main() {
	cin.getline(str, max_size);
	int cz = Charsize(str, max_size);
	int space = 1;
	if (str[0] == ' ') space = 0;
	for (int i = 0; i < cz; i++) {
		if (str[i] == ' ') space++;
	}
	if (str[cz - 1] == ' ') space--;
	cout << space;
}

int Charsize(char arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == NULL) break;
		count++;
	}
	return count;
}
