#include <iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	const int person = 5;
	int score[person];
	int sum = 0;
	for (int i = 0; i < person; i++) {
		cin >> score[i];
		if (score[i] < 40) {
			score[i] = 40;
		}
		sum += score[i];
	}
	cout << sum / (sizeof(score) / sizeof(score[0]));

	return 0;
}