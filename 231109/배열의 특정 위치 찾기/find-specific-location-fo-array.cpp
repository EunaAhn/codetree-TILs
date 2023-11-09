#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum_1 = 0;
    double sum_2 = 0;
    double cnt = 0;

    // 여기에 코드를 작성해주세요.
    for(int i=0; i<10; i++){
        cin >> arr[i];
        if(i%2!=0){
            sum_1 += arr[i];
        }
        if((i + 1) % 3 == 0){
            sum_2 += arr[i];
            cnt++;
        }
    }

    cout << fixed;
    cout.precision(1);
    cout << sum_1 << " " << sum_2/cnt;

    return 0;
}