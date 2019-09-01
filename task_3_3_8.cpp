#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    if ((a[0] == 'A' or a[0] == 'C' or a[0] == 'E') and (a[3] != a[2])){
        if ((a[1]=='B'&& a[3]!='B')|| (a[1]=='C'&& a[3]!='B') ||(a[1]=='F')&& (a[3]!='F')) {
            cout << "YES";
        } else cout << "NO";
    } else cout << "NO";
    return 0;
}