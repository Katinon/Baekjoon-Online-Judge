#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T, arr[50]; cin >> T;
	for (int i = 0; i < T; i++)
		cin >> arr[i];
	sort(arr, arr + T);
	cout << arr[0] * arr[T - 1];
}
