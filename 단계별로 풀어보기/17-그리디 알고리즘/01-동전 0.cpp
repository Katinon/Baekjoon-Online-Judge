#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int arr[11], N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) 
		cin >> arr[i];
	
	int maxx = 0, price = K;
	for (int i = N; i >= 1; i--) {
		if (arr[i] > price) continue;
		if (price % arr[i] == 0) {
			maxx += price / arr[i];
			break;
		}
		else {
			maxx += price / arr[i];
			price -= arr[i] * (price / arr[i]);
		}
	}
	cout << maxx;
}
