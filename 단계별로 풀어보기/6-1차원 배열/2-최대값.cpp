#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int num[9];
	int max = 0;
	int count;
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
		if (num[i] > max) max = num[i], count = i + 1;
	}
	cout << max << "\n" << count;
}