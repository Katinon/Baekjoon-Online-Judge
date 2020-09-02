#include <iostream>
#include <vector>
using namespace std;

vector <int>vec;
int oper[4], N;
int max1 = -1000000000, min1 = 1000000000;
void DFS(int cnt, int tmp);

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		vec.push_back(tmp);
	}
	for (int i = 0; i < 4; i++) {
		int tmp2;
		cin >> tmp2;
		oper[i] = tmp2;
	}
	DFS(0, vec[0]);
	cout << max1 << "\n" << min1;
}

void DFS(int cnt, int tmp) {
	if (cnt == N-1) {
		if (tmp > max1) max1 = tmp;
		if (tmp < min1) min1 = tmp;
		return;
	}
	for (int i = 0; i < 4; i++) {
		int result = tmp;
		if (oper[i]) {
			oper[i]--;
			if (i == 0) result += vec[cnt + 1];
			if (i == 1) result -= vec[cnt + 1];
			if (i == 2) result *= vec[cnt + 1];
			if (i == 3) result /= vec[cnt + 1];
			DFS(cnt + 1, result);
			oper[i]++;
		}
	}
}
