#include <iostream>
using namespace std;

int RoomNum(int _h, int _w, int _n) {
	int h, w, n;
	h = _n % _h;
	w = _n / _h + 1;
	if (h == 0) w--;
	if (h == 0) h = _h;

	int roomnum = h * 100 + w;
	return roomnum;
}

int main() {
	int a, h, w, n;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> h >> w >> n;
		cout << RoomNum(h, w, n) << endl;
	}
}