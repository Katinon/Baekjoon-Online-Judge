#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int M, N, minn=100001, sum = 0;
	cin >> M >> N;
	int i = sqrt(M);
	while (i*i<=N) {
		if (i * i >= M) {
			if (minn > i * i) minn = i*i;
			sum += i * i;
		}
		i++;
	}
	if (sum == 0) cout << -1;
	else cout << sum << "\n" << minn;
}
