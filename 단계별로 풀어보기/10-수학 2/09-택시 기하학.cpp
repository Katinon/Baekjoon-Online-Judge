#include <iostream>
#include <cmath>
#define PI 3.1415926535897932
using namespace std;

int main() {
    long double R;
    cin >> R;
    cout << fixed;
    cout.precision(6);
    cout << powl(R, 2) * PI << '\n';
    cout << powl(R, 2) * 2 << '\n';
    
    //R의 값이 최대 10000이므로, define으로 pi를 지정하는경우
    // 16번째자리까지는 적어주어야한다.
}