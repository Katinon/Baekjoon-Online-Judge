#include <iostream>
using namespace std;

int charsize(char arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == NULL) break;
		count++;
	}
	return count;
}

int main() {
	const int max_char = 21;
	int testcase, rep;
	cin >> testcase;

	for (int n = 0; n < testcase; n++) {
		char arr[max_char];
		cin >> rep >> arr;
		int cs = charsize(arr, max_char);

		char new_arr[max_char * 8];
		int new_count = 0;
		for (int i = 0; i < cs; i++) {
			for (int j = 0; j < rep; j++) {
				new_arr[new_count] = arr[i];
				new_count++;
			}
		}
		new_arr[rep * cs] = '\0';
		cout << new_arr << endl;

	}
}
