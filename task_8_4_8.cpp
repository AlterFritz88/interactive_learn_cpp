#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, t = 0; cin >> n >> k;
    k=240-k;
    for(int i=0; i<n; i++){
        t+=5*(i+1);
        if(t>k){cout<<i; return 0;};
    }
    cout << n;
    return 0;
}