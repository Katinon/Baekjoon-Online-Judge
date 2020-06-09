#include <iostream> // 소수 1300개(1229)
using namespace std;

int ReturnBool(int num) {
	if (num < 2) return 0;
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) return 0;
	}
	return 1;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int count = 0;
	int arr[1300];

	for (int i = 1; i <= 10000; i++) {
		if (ReturnBool(i)) 
			arr[count] = i, count++;
	}

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int n,a,b;
		cin >> n;
		for (int j = 0; j < 1300; j++) {
			if (arr[j] == NULL) break;
			if (ReturnBool(n - arr[j])) {
				if (n - 2 * arr[j] < 0) break;
				a = arr[j], b = n - arr[j];
			}
		}
		cout << a << " " << b << endl;
	}
}