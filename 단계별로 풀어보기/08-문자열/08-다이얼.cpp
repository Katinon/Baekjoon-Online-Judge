#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[16];
	cin >> arr;
	int result = 0;
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] < 80) result += (arr[i] - 65) / 3 + 3;
		else if (arr[i] < 84) result += 8;
		else if (arr[i] < 87) result += 9;
		else if (arr[i] < 91) result += 10;
	}
	cout << result;
}
