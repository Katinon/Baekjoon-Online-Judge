#include <iostream>
using namespace std;

int main() {
	int num[1000];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	for (int j = 0; j < N - 1; j++) {
		for (int k = 0; k < N - j - 1; k++) {
			int temp;
			if (num[k] > num[k + 1]) {
				temp = num[k];
				num[k] = num[k + 1];
				num[k + 1] = temp;
			}
		}
	}
	for (int i = 0; i < N; i++) cout << num[i] << endl;
}