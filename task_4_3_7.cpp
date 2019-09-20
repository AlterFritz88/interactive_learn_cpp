#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp == 2) cout << 5 << " ";
        else cout << temp << " ";
    }
    return 0;
}