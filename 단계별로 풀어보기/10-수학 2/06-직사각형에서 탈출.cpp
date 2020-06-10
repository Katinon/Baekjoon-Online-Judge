#include <iostream>
using namespace std;

int Returnlen(int x, int y, int w, int h) {
	int wd, hd;
	(w / 2 >= x) ? wd = x : wd = w - x;
	(h / 2 >= y) ? hd = y : hd = h - y;
	return (wd > hd) ? hd : wd;
}

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	cout << Returnlen(x, y, w, h);
}