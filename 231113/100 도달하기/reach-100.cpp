#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[60];
    arr[0] = 1;
    arr[1] = n;
    cout << arr[0] << " " << arr[1] << " " ;

    // 여기에 코드를 작성해주세요.
    for(int i=2; i<60; i++){
        arr[i] = arr[i-1] + arr[i-2];
        cout << arr[i] << " ";
        if(arr[i]>100){
            break;
        }

    }
    return 0;
}