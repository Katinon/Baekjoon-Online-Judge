#include <iostream>
using namespace std;
int orinum[10000] = { 0 };
int selfnum[10000] = { 0 };

void Self_Number() {
	orinum[10000] = { 0 };
	selfnum[10000] = { 0 };
	for (int i = 0; i < 10000; i++) {
		orinum[i] = i + 1;
		int temp = orinum[i];
		int total = 0;
		while (true) {
			if (temp == 0) break;
			total += temp % 10;
			temp /= 10;
		}
		int sn = orinum[i] + total;
		selfnum[sn - 1] = 1;
	}

	for (int i = 0; i < 10000; i++) {
		if (selfnum[i] == 0) cout << i + 1 << "\n";
	}

}

int main() {
	Self_Number();
	return 0;
}