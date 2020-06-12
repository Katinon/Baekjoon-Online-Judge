#include <iostream>
using namespace std;

int main() {
	int x[50] = { 0 };
	int y[50] = { 0 };
	int num; cin >> num;
	for (int i = 0; i < num; i++) 
		cin >> x[i] >> y[i];
	for (int j = 0; j < num; j++) {
		int grade = 1;
		for (int k = 0; k < num; k++) {
			if (x[j] < x[k] && y[j] < y[k]) grade++;
		}
		cout << grade << " ";
	}
}
