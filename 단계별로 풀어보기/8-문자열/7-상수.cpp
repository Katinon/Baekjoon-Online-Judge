#include <iostream>
#include <cstdlib>
using namespace std;

char* Back(char arr[]) {
	char temp = arr[0];
	arr[0] = arr[2];
	arr[2] = temp;
	return arr;
}

int main() {
	char arr1[4], arr2[4];
	cin >> arr1 >> arr2;

	int a1 = atoi(Back(arr1));
	int a2 = atoi(Back(arr2));
	if (a1 > a2) cout << a1;
	else cout << a2;
}