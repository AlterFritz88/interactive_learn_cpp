#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5];
    int temp;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        arr[i] = temp;
    }
    sort(arr, arr+5, greater<int>());
    for (int i = 0; i < 5; i++) cout << arr[i] << " ";
    return 0;
}