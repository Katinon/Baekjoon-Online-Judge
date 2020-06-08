#include <iostream>
using namespace std;
//a=97,z=122, A=65, Z=90
int Charsize(char arr[], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] == NULL) break;
		count++;
	}
	return count;
}

void BubbleSort(int arr[], int n) {
	int temp;
	for (int i = n - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

const int max_size = 1000000;
char arr[max_size];

int main() {
	cin >> arr;
	int cz = Charsize(arr, max_size);
	int alp_count[26] = { 0 };
	for (int i = 0; i < cz; i++) {
		if (arr[i] < 97) alp_count[arr[i] - 65]++; //대문자
		else alp_count[arr[i] - 97]++; //소문자
	}

	int alp_count2[26];
	for (int i = 0; i < 26; i++) alp_count2[i] = alp_count[i];

	BubbleSort(alp_count2, 26);
	if (alp_count2[0] == alp_count2[1]) {
		cout << "?";
		return 0;
	}
	else {
		int maxi = 0, max = 0;
		for (int i = 0; i < 26; i++) {
			if (alp_count[i] > max) {
				max = alp_count[i];
				maxi = i;
			}
		}
		cout << (char)(65 + maxi);
	}
}