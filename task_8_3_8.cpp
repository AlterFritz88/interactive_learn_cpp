#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp % 2 == 1) cout << temp << " ";
        else cout << temp - 1 << " ";
    }
    return 0;
}