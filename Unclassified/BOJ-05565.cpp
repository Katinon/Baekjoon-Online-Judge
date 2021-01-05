#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int sum, temp; cin >> sum;
	for (int i = 0; i < 9; i++) {
		cin >> temp;
		sum -= temp;
	}
	cout << sum;
}
