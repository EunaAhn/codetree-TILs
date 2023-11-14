#include <iostream>
using namespace std;

int main() {
    int arr[11];
    int count[7] = {0, };

    // 여기에 코드를 작성해주세요.
    for(int i=0; i<10; i++){
        cin >> arr[i];
        count[arr[i]]++;
    }
    
    for(int i=1; i<7; i++){
        cout << i << " " << "-" << " " << count[i] << endl;
    }

    return 0;
}