#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int a=0; a<=n/4; a++)
        for(int b=0; b<=n/7; b++)
            if(4*a + 7*b==n){
                for(int i=0; i<a; i++)cout<<4;
                for(int i=0; i<b; i++)cout<<7;
                return 0;
            }
    cout << -1;
    return 0;
}