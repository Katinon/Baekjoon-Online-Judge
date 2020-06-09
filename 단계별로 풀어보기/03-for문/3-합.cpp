#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;
    cin >> num;
    while (num) {
        sum += num;
        num--;
    }
    cout << sum;
}