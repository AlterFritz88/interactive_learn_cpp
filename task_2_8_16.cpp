#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, temp;
    cin >> a;
    int n;
    cin >> n;
    cout << 1 << " ";
    for (int i = 2; i <= a ; i++){
        cin >> temp;
        if (temp == n) cout << i << " ";
    }
    return 0;
}