#include <iostream>
using namespace std;
int arr[100000], pt = 0, sum = 0;
int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		if (tmp == 0) {
			pt--;
			sum -= arr[pt];
			arr[pt] = 0;
			continue;
		}
		arr[pt] = tmp;
		sum += tmp;
		pt++;
	}
	cout << sum;
}
