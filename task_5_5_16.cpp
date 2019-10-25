#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, init = 1; cin >> n;
    for (int i = 1; i < n; i++){
        if (i%2 != 0) init++;
        else init += 3;
    }
    cout << init;
    return 0;
}