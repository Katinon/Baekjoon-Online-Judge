#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num;
    cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = num; j > i; j--) {
            cout << " ";
        }
        for (int k = 0; k < i; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}