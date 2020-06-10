#include <iostream>
#include <cmath>
using namespace std;

int ReturnNum(double x1, double y1, double r1, double x2, double y2, double r2) {
	double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	if (x1 == x2 && y1 == y2 && r1 == r2) return -1;

	if (d<abs(r1 - r2) || d>r1 + r2)return 0;
	else if (d == r1 + r2 || d == abs(r1-r2)) return 1;
	else return 2;
}

int main() {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		cout << ReturnNum(x1, y1, r1, x2, y2, r2) << "\n";
	}
}