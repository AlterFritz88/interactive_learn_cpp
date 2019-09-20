#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp == 1) cout << 0 << " ";
        else cout << 1 << " ";
    }
    return 0;
}