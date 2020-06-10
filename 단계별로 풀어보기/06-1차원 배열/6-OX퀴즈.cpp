#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    char message[80];
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        cin >> message;
        int count = 0;
        int result = 0;
        for (int j = 0; j < strlen(message); j++) {
            if (message[j] == 'O') {
                count++;
                result += count;
            }
            if (message[j] == 'X') count = 0;
        }
        cout << result << endl;
    }
}