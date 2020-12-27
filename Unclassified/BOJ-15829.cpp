#include <iostream>
#include <cmath>
#define ll long long
#define MOD 1234567891
using namespace std;
int main() {
	int sz;  char arr[51]; 
	cin >> sz >> arr;
	ll hash = 0, temp = 1;
	for (int i = 0; i < sz; i++) {
		hash = (hash + (arr[i] - 96) * temp) % MOD;
		temp = (temp * 31) % MOD;
	}
	cout << hash;
}
