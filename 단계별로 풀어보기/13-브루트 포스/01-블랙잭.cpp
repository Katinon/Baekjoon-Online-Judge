#include <iostream>
using namespace std;

int BlackJack(int num, int MaxNum) {
	int* arr = new int[num];
	for (int i = 0; i < num; i++) cin >> arr[i];
	int sum = 0;
	for (int i = 0; i < num - 2; i++) {
		for (int j = i + 1; j < num - 1; j++) {
			for (int k = j + 1; k < num; k++) {
				int _sum = arr[i] + arr[j] + arr[k];
				if (_sum > sum&& _sum <= MaxNum) sum = _sum;
			}
		}
	}
	delete[] arr;
	arr = NULL;
	return sum;
}

int main() {
	int num, maxnum;
	cin >> num >> maxnum;
	cout << BlackJack(num, maxnum);
}