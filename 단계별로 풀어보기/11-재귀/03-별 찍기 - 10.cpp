//인터넷 참고
#include <iostream>
using namespace std;
void Star(int i, int j, int N);

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			Star(i, j, N);
		}
		cout << "\n";
	}
}

void Star(int i, int j, int N) {
	if ((i / N) % 3 == 1 && (j / N) % 3 == 1) {
		cout << " ";
	}
	else {
		if (N / 3 == 0)
			cout << "*";
		else
			Star(i, j, N / 3);
	}
}
