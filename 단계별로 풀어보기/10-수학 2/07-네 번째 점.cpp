#include <iostream>
using namespace std;

void ReturnDot() {
	int x1, x2, x3, y1, y2, y3, w, h;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	w = (x1 == x2) ? x3 : (x2 == x3 ? x1 : x2);
	h = (y1 == y2) ? y3 : (y2 == y3 ? y1 : y2);
	cout << w << " " << h;
}
int main() {
	ReturnDot();
}

/*
삼항연산자 풀어쓴 식: 
	if (x1 == x2) w = x3;
	else if (x2 == x3) w = x1;
	else w = x2;

	if (y1 == y2) h = y3;
	else if (y2 == y3) h = y1;
	else h = y2;
*/