#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K, cnt = 0, result=0; cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		if (N % i == 0) cnt++;
		if (cnt == K) {
			result = i;
			break;
		}
	}
	cout << result;
}
