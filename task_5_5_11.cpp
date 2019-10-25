#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n - 1];
    arr[1] = 2;
    arr[2] = 4;

    if (n == 1 || n == 2){
        cout << arr[n];
    } else {
        for (int i = 3; i < n + 1; i++){
            arr[i] = arr[i - 1] + i;
        }
        cout << arr[n];
    }
    return 0;
}