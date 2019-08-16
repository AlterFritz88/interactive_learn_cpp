#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 1; i < (n); i++){
        cout << n;
        if ((i + i + i) == n){
            cout << i << ' ' << i  << ' ' << i;
            break;
        }
        if ((i + (i) + (i+1)) == n){
            cout << i << ' ' << i << ' ' << i + 1;
            break;
        }
        if ((i + (i+1) + (i+1)) == n){
            cout << i << ' ' << i + 1 << ' ' << i + 1;
            break;
        }

    }
    return 0;
}
