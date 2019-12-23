#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a;
    b=a/10;
    c=(a/100)*10 + a%10;
    if(a>=0)cout<<a; else
        cout<<max(b,c);
    return 0;
}