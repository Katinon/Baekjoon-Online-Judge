#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int stu_num;
    int test_num;

    cin >> test_num;
    for (int i = 0; i < test_num; i++) {
        cin >> stu_num;
        float result = 0;
        int score[1000];
        int oversco = 0;
        for (int j = 0; j < stu_num; j++) {
            cin >> score[j];
            result += score[j];
        }
        float ave = result / (float)stu_num;
        for (int k = 0; k < stu_num; k++) {
            if (score[k] > ave) oversco++;
        }
        cout << fixed;
        cout.precision(3);
        float rate = (float)oversco / (float)stu_num * 100;
        cout << rate << "%" << endl;
    }
}