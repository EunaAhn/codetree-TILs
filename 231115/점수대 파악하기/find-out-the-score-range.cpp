#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count[11]={0,};

    // 여기에 코드를 작성해주세요.
    for(int i=0; i<100; i++){
        cin >> arr[i];
        if (arr[i]>=10){
            count[arr[i]/10]++;
        }
        if(arr[i]==0){
            break;
        }
    }

    for(int i=10; i>=1; i--){
        cout << i*10 << " - " << count[i]<<endl;
    }

    return 0;
}