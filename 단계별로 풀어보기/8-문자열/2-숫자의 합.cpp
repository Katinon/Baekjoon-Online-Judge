#include <iostream>
using namespace std;

int main() {
	int n;
	int result = 0;
	cin >> n;
	char num[100];
	cin >> num;
	for (int i = 0; i < n; i++) {
		result += (int)num[i] - (int)'0';
	}
	cout << result;
}