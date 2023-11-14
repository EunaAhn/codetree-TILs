#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int count[11] = {0, };

    // 여기에 코드를 작성해주세요.
    for(int i=0; i<100; i++){
        cin >> arr[i];
        count[arr[i]/10]++;
        if(arr[i]==0){
            break;
        }
    }

    for(int i=1; i<10; i++){
        cout << i << " - " << count[i] << endl;
    }

    return 0;
}