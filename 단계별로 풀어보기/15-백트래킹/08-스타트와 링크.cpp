#include <iostream>
#define MAX 20
using namespace std;

int arr[MAX][MAX];
int N, minn=2000000000;
bool check[20] = { 0, };

void Input_arr(int N);
void DFS(int cnt, int num);

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	Input_arr(N);
	DFS(0, 0);
	cout << minn;
}

void Input_arr(int N) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int temp;
			cin >> temp;
			arr[i][j] = temp;
		}
	}
}

void DFS(int cnt, int num) {
	if (cnt == N/2) {
		int tmp, sum1 = 0, sum2=0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i != j) {
					if (check[i] && check[j])
						sum1 += arr[i][j];
					else if (!check[i] && !check[j])
						sum2 += arr[i][j];
				}
			}
		}
		if (sum1 >= sum2) tmp = sum1 - sum2;
		else tmp = sum2 - sum1;

		if (tmp < minn) minn = tmp;
		return;
	}

	for (int i = num; i < N; i++) {
		if (!check[i]) {
			check[i] = true;
			DFS(cnt + 1, i+1);
			check[i] = false;
		}
	}
}
