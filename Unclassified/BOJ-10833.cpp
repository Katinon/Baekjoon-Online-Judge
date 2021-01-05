#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, stu, a, sum=0; cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> stu >> a;
		sum += a % stu;
	}
	cout << sum;
}
