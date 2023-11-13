#include <iostream>
using namespace std;

int main() {
    int arr[100];


    // 여기에 코드를 작성해주세요.
    for(int i=0; i<100; i++){
        cin >> arr[i];
        if(arr[i]%2 !=0){
            cout << arr[i]+3 << " ";
        } else if(arr[i]%2==0 && arr[i]!=0){
            cout << arr[i]/2 << " ";
        } else if(arr[i]==0){
            break;
        }
    }
    return 0;
}