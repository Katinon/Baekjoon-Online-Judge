#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int T, N, C, G, sum; cin >> T;
	double score, c, g;
	for (int i = 0; i < T; i++) {
		cin >> N;
		double score = 0;
		int sum = 0;
		for (int j = 0; j < N; j++) {
			cin >> c >> g;
			sum += c;
			score += c * g;
		}
		cout << sum << " ";
		cout << fixed << setprecision(1) 
			<< score / sum << "\n";
	}
}
