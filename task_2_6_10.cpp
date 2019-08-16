#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[4];
    int temp;
    for (int i = 0; i < 4; i++){
        cin >> temp;
        arr[i] = temp;
    }
    sort(arr, arr+4);
    cout << arr[0] * arr[1];
    return 0;
}
