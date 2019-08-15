#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[3];
    int temp;
    for (int i = 0; i < 3; i++){
        cin >> temp;
        arr[i] = temp;
    }
    sort(arr, arr+3, greater<int>());
    cout << arr[1];
    return 0;
}
