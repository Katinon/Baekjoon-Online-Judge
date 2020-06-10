#include <iostream>
using namespace std;

int OneNumber(int num) {
	int arr[1000];
	int count = 0;
	for (int i = 0; i < num; i++) {
		arr[i] = i + 1;
		if (arr[i] < 100) count++;
		else if (arr[i] < 1000) {
			int one = 0, ten = 0, hun = 0;
			int temp = arr[i];
			one = temp % 10;
			ten = (temp / 10) % 10;
			hun = (temp / 100) % 10;
			if (hun - ten == ten - one) count++;
		}
		else continue;
	}
	return count;
}

int main() {
	int num;
	cin >> num;
	cout << OneNumber(num);
}