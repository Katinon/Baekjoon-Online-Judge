#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int GCD(int a, int b) {
	if (a % b == 0) return b;
	return GCD(b, a % b);
}

int main() {
	int arr[100];
	vector <int> vec;
	int N; cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	sort(arr, arr + N);
	int gcd = arr[1] - arr[0];
	for (int i = 2; i < N; i++) {
		gcd = GCD(gcd, arr[i] - arr[i - 1]);
	}
	for (int i = 2; i*i <= gcd; i++) {
		if (gcd % i == 0) {
			vec.push_back(i);
			if (i * i != gcd)
				vec.push_back(gcd / i);
		}
	}
	sort(vec.begin(), vec.end());
	vec.push_back(gcd);
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
}
