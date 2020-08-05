#include <iostream>
#include <cmath>
using namespace std;

int arr[500000];
int sorted_arr[500000];
int counting[8001] = { 0, };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N; cin >> N;
	int sum = 0;

	//N개의 수 받기
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		sum += arr[i]; // 산술평균 변수
		counting[4000 + arr[i]]++; //카운팅정렬 배열
	}

	int sorted_i = 0;
	int fre_value, fre_max = 0;

	for (int i = 0; i < 8001; i++) {
		for (int j = 0; j < counting[i]; j++) {
			sorted_arr[sorted_i] = i - 4000;
			sorted_i++;
		}
		if (counting[i] > fre_max)
			fre_max = counting[i];
	} //카운팅정렬 & 최대 빈도수

	int flag = 0;
	for (int i = 0; i < 8001; i++) {
		if (counting[i] == fre_max) flag++, fre_value = i - 4000;
		if (flag == 2) {
			fre_value = i - 4000;
			break;
		}
	}

	cout << round(sum / (double)N) << "\n" //산술평균
		<< sorted_arr[N / 2] << "\n" //중앙값
		<< fre_value << "\n" //최빈값
		<< sorted_arr[N - 1] - sorted_arr[0] << "\n"; //범위
}
