#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    cout << a << " " << b << " ";
    int arr[10];
    arr[0] = a;
    arr[1] = b;

    // 여기에 코드를 작성해주세요.
    for(int i=2; i<10; i++){
        arr[i] = arr[i-1] + 2*arr[i-2];
        cout << arr[i] << " ";
    }
    return 0;
}