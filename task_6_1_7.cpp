#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d, e,m;
    cin>>a>>b>>c>>d >> e;
    m = min(a, min(b, min(c, min(d, e))));
    cout<<m;
    return 0;
}