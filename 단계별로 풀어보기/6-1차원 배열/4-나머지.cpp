#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int rem[42] = { 0 };
    int x;
    int count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> x;
        rem[x % 42] = 1;
    }
    for (int j = 0; j < 42; j++) count += rem[j];

    cout << count;
}