#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector <int> a(n),b(m),c;
    for(int i=0; i<n; i++)cin>>a[i];
    for(int j=0; j<m; j++)cin>>b[j];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(a[i]==b[j])c.push_back(a[i]);
    for(auto t:c)cout<<t<<" ";

    return 0;
}