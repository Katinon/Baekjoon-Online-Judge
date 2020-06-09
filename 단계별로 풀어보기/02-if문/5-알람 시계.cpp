#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (b - 45 >= 0) {
        cout << a << " " << b - 45;
    }
    else {
        if (a - 1 >= 0) {
            cout << a - 1 << " " << b - 45 + 60;
        }
        else {
            cout << a - 1 + 24 << " " << b - 45 + 60;
        }
    }
    return 0;
}