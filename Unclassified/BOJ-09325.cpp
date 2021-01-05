#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T; cin >> T;
	for (int i = 0; i < T; i++) {
		int price; cin >> price;
		int option; cin >> option;
		if (option) {
			for (int j = 0; j < option; j++) {
				int n, pr;
				cin >> n >> pr;
				price += n * pr;
			}
		}
		cout << price << "\n";
	}
}
