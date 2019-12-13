#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, n;
    cin >> n >> k;
    string s, t;
    cin >> s;
    t=s;
    for(int j=0; j<k; j++){
        for(int i=0; i<n-1; i++)
            if(s[i]=='B' && s[i+1]=='G'){
                t[i+1]=s[i];
                t[i]=s[i+1];
            }
        s=t;
    }
    cout << s;
    return 0;
}