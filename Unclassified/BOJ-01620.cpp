#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
string Pname[100001];
map<string, int> pocketmon;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M; cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> Pname[i];
		pocketmon.insert({ Pname[i], i + 1 });
	}
		
	for (int j = 0; j < M; j++) {
		string s; cin >> s;
		if (atoi(s.c_str()))
			cout << Pname[atoi(s.c_str()) - 1] << "\n";
		else {
			cout << pocketmon[s] << "\n";
		}
	}
}
