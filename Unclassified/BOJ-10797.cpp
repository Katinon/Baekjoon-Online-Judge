#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum = 0; cin >> n;
	for (int i = 0; i < 5; i++) {
		int temp; cin >> temp;
		if (temp == n) sum++;
	}
	cout << sum;
}
