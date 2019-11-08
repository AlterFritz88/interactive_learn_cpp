#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,m;
    cin>>a>>b>>c>>d;
    m = max(a, max(b, max(c, d)));
    cout<<m;
    return 0;
}