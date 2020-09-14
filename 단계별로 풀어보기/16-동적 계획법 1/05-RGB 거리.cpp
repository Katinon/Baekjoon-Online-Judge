#include <iostream>
#include <algorithm>
using namespace std;

int cost[1001][3] = { 0, };
int temp[1001][3] = { 0, };
void Input(int N);
int main() {
	int N; cin >> N;
	Input(N);
	for (int i = 1; i <= N; i++) {
		temp[i][0] = cost[i][0] + min(temp[i - 1][1], temp[i - 1][2]);
		temp[i][1] = cost[i][1] + min(temp[i - 1][0], temp[i - 1][2]);
		temp[i][2] = cost[i][2] + min(temp[i - 1][0], temp[i - 1][1]);
	}
	cout << min(temp[N][0], min(temp[N][1], temp[N][2]));
}

void Input(int N) {
	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> cost[i][j];
		}
	}
}
