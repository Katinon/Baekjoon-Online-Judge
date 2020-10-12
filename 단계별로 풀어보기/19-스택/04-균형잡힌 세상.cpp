#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	while (true) {
		int flag = 1;
		vector <char> vec;
		string str;
		getline(cin, str);
		if (str.size() == 1 && str[0] == '.') break;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				vec.push_back(str[i]);
			}
			else if (str[i] == ')') {
				if (vec.size() > 0 && vec[vec.size() - 1] == '(')
					vec.pop_back();
				else {
					flag = 0;
					break;
				}
			}
			else if (str[i] == ']') {
				if (vec.size() > 0 && vec[vec.size() - 1] == '[')
					vec.pop_back();
				else {
					flag = 0;
					break;
				}
			}
		}
		if (flag && vec.empty()) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}
