#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001] = { 0, };
int d[10001] = { 0, };
int main() {
	int N, maxx=0; cin >> N;
	for (int i = 1; i <= N; i++) 
		cin >> arr[i];
	d[1] = arr[1];
	d[2] = arr[1] + arr[2];
	for (int i = 3; i <= N; i++) {
		d[i] = max(d[i - 1], d[i - 3] + arr[i - 1] + arr[i]);
		d[i] = max(d[i], d[i - 2] + arr[i]);
	}
	cout << d[N];
}
