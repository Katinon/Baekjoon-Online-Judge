#include <iostream>
#include <algorithm>
using namespace std;

int temp[501][501] = { 0, };
int ori[501][501] = { 0, };
int N;
void Input(int N);

int main() {
	cin >> N;
	Input(N);
	for (int i = 1; i <= N; i++) {
		int t = 0;
		while (t != i) {
			if (t == 0) temp[i][t] = ori[i][t] + temp[i - 1][t];
			else if (t == (i - 1)) temp[i][t] = ori[i][t] + temp[i - 1][t - 1];
			else temp[i][t] = ori[i][t] + max(temp[i - 1][t - 1], temp[i - 1][t]);
			t++;
		}
	}
	int maxx = temp[N][0];
	for (int i = 1; i < N; i++) {
		if (maxx < temp[N][i]) maxx = temp[N][i];
	}
	cout << maxx;
}

void Input(int N) {
	for (int i = 1; i <= N; i++) {
		int t = 0;
		while (t != i) {
			cin >> ori[i][t];
			t++;
		}
	}
}
