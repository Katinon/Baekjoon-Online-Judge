#include <iostream>
#include <algorithm>
using namespace std;

int N;
int cost[301] = { 0, };
int temp[301] = { 0, };
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> cost[i];
	}
	temp[1] = cost[1];
	temp[2] = cost[1] + cost[2];
	for (int i = 3; i <= N; i++) {
		temp[i] = max(temp[i - 3] + cost[i - 1] + cost[i], temp[i - 2] + cost[i]);
	}
	cout << temp[N];
}
