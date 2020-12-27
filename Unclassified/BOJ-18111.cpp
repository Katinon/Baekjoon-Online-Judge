#include <iostream>
#include <climits>
using namespace std;
int arr[500][500];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M, B, maxx = 0, minn = INT_MAX;
	cin >> N >> M >> B;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
			if (maxx < arr[i][j]) maxx = arr[i][j];
			if (minn > arr[i][j]) minn = arr[i][j];
		}
	}

	int height = 0, sec = INT_MAX;
	for (int i = minn; i <= maxx; i++) {
		int build = 0, remove = 0;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				int tmp = arr[j][k] - i;
				if (tmp < 0) build -= tmp;
				else remove += tmp;
			}
		}

		if (remove + B >= build) {
			int tmp = build + remove * 2;
			if (sec >= tmp) {
				sec = tmp;
				height = i;
			}
		}
	}
	cout << sec << " " << height;
}
