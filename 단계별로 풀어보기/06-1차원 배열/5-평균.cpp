#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    float max = 0;
    float result = 0;
    int num;
    cin >> num;
    int score[1000];
    for (int i = 0; i < num; i++) {
        cin >> score[i];
        if (score[i] > max) max = score[i];
    }
    for (int j = 0; j < num; j++) {
        float k = (float)score[j] / (float)max;
        result += score[j] / max * 100;
    }
    cout.precision(5);
    cout << result / (float)num;
}