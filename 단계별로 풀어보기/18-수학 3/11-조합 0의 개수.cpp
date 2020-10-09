#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<long long, long long> func(long long n) {
	long long two = 0, five = 0;
	for (long long i = 2; i <= n; i *= 2)
		two += n / i;
	for (long long i = 5; i <= n; i *= 5)
		five += n / i;
	return { two, five };
}


int main() {
	vector <pair<long long, long long>> v(3);
	long long a, b;
	cin >> a >> b;
	v[0] = func(a);
	v[1] = func(b);
	v[2] = func(a - b);
	cout << min(v[0].first - v[1].first - v[2].first, 
		v[0].second - v[1].second - v[2].second) << endl;
}
