#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    int arr[4];
    for (int i = 0; i < 4; i++){
        cin >> temp;
        arr[i] = temp;
    }
    sort(arr, arr+4);
    int ans = 0;
    for (int i = 0; i < 4; i++){
        ans += arr[i] * pow(10, i);
    }
    cout << ans;
    return 0;
}

