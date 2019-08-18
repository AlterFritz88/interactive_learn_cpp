#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[3] = {n / 100, n/10%10, n%10};
    sort(arr, arr+3);
    if (arr[0] + 1 == arr[1] and arr[1] + 1 == arr[2]) cout << "YES";
    else cout << "NO";
    return 0;
}
