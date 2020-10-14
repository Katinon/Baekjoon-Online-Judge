#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<int> q;
vector<int> v;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, K;
	cin >> N >> K;
	for (int i = 1; i <= N; i++)
		q.push(i);
	
	while (!q.empty()) {
		int tmp = q.front();
		for (int i = 0; i < K - 1; i++) {
			q.pop();
			q.push(tmp);
			tmp = q.front();
		}
		v.push_back(tmp);
		q.pop();
	}
	cout << "<";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
		if (i != v.size() - 1) 
			cout << ", ";
		else cout << ">";
	}
}
