#include <iostream>
using namespace std;

int ReturnCnt(int num) {
    int cnt = 0;
    for (int i = 0; i < num; i++) {
        int n, temp = 0;
        cin >> n;
        if (n == 1) continue;
        if (n == 2) {
            cnt++;
            continue;
        }
        for (int j = 2; j < n; j++) {
            if (n % j == 0) temp = 1;
        }
        if (temp == 0) cnt++;
    }
    return cnt;
}

int main() {
    int num;
    cin >> num;
    cout << ReturnCnt(num);
}