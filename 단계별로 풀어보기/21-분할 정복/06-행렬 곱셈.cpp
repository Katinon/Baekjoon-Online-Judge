#include <iostream>
using namespace std;
int A[101][101], B[101][101], C[101][101];

int main() {
	int N, M, K;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++)
			cin >> A[i][j];
	}
	cin >> M >> K;
	for (int i = 1; i <= M; i++) {
		for (int j = 1; j <= K; j++)
			cin >> B[i][j];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {
			for (int t = 1; t <= M; t++) {
				C[i][j] += A[i][t] * B[t][j];
			}
			cout << C[i][j] << " ";
		}
		cout << "\n";
	}

}
