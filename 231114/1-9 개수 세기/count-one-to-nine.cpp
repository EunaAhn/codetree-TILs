#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // 원소의 개수 입력 받기

    int count[10] = {0}; // 1부터 9까지 숫자의 출현 횟수를 저장할 배열 초기화

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num; // 원소 입력 받기
        count[num]++; // 해당 숫자의 출현 횟수 증가
    }

    for (int i = 1; i <= 9; i++) {
        cout << count[i] << endl; // 각 숫자의 출현 횟수 출력
    }

    return 0;
}