#include <iostream>
using namespace std;

int main() {
    int arr[20];
    cin >> arr[0];

    int cnt = 0;
    int index = 1;

    // 여기에 코드를 작성해주세요.
    for(int i=1; cnt < 2; i++){
        arr[i] = arr[0]*i;
        index++;

        if (arr[i]%5 ==0){
            cnt++;
        }
    }

    for(int i=1; i<index; i++){
        cout << arr[i] << " ";
    }

    return 0;
}