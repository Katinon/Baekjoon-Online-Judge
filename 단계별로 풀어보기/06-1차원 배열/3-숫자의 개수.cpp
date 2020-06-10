#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int x, y, z;
    int count[10] = { 0 };
    cin >> x >> y >> z;
    int result = x * y * z;
    while (result) {
        int i = result % 10;
        count[i]++;
        result /= 10;
    }
    for (int i = 0; i < 10; i++) {
        cout << count[i] << endl;
    }
}