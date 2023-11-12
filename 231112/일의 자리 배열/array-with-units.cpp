#include <iostream>
using namespace std;

int main() {
    int arr[11];
    cin >> arr[0] >> arr[1];
    cout << arr[0] << " " << arr[1] << " ";

    // 여기에 코드를 작성해주세요.
    for(int i=2; i<10; i++){
        arr[i]= arr[i-1] + arr[i-2];
        cout << arr[i]%10 << " ";
    }

    return 0;
}