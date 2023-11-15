#include <iostream>
using namespace std;

int main() {
    int arr[4];
    char sick[4];
    int count[5]={0};

    // 여기에 코드를 작성해주세요.
    for(int i=0; i<3; i++){
        cin >> sick[i] >> arr[i];
        if(arr[i]>=37 && sick[i]=='Y'){
            count[0]++;
        } else if(arr[i]>=37 && sick[i]=='N'){
            count[1]++;
        } else if(arr[i]<37 && sick[i]=='Y'){
            count[2]++;
        } else if(arr[i]<37 && sick[i]=='N'){
            count[3]++;
        }
    }

    for(int i=0; i<4; i++){
        cout << count[i] << " ";
    }

    if(count[0]>=2){
        cout << "E";
    }
    return 0;
}