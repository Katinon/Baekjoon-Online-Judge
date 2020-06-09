#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int num, a, b;
    cin >> num;
    while (num) {
        cin >> a >> b;
        cout << a + b << "\n";
        num--;
    }
}
