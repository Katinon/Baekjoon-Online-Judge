#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n; cin >> n;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) cout << " ";
		for (int j = 1; j <= n; j++)
			cout << "* ";
		cout << "\n";
	}
}
