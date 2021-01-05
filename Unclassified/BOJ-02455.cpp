#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int sum = 0, maxx=0;
	for (int i = 0; i < 4; i++) {
		int output, input;
		cin >> output >> input;
		sum += input - output;
		if (maxx < sum) maxx = sum;
	}
	cout << maxx;
}
