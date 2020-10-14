#include <iostream>
#include <stack>
#include <vector>
using namespace std;

vector<int> v;
vector<char> c;
stack<int> s;

int main() {
	int N; cin >> N;
	for (int i = 0; i < N; i++) {
		int tmp; cin >> tmp;
		v.push_back(tmp);
	}
	vector<int>::iterator it;
	it = v.begin();
	for (int i = 1; i <= N; i++) {
		s.push(i);
		c.push_back('+');
		while (s.empty() == 0) {
			if (*it != s.top()) break;
			else {
				c.push_back('-');
				s.pop();
				++it;
			}
		}
	}
	if (s.empty()) {
		for (int i = 0; i < c.size(); i++) {
			cout << c[i] << "\n";
		}
	}
	else cout << "NO";
}
