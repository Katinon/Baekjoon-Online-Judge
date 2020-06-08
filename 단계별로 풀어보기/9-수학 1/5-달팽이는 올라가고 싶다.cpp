#include <iostream>
using namespace std;

int SnailHeight(int a, int b, int v) {
	int day = 0;
	day = (v - a) / (a - b) + 1;
	if ((v - a) % (a - b) != 0) day++;
	return day;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int A, B, V;
	cin >> A >> B >> V;
	cout << SnailHeight(A, B, V);
}