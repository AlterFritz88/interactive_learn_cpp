#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    string a1 = a.substr(0, a.size() / 2);
    string a2 = a.substr(a.size() / 2, a.size());
    cout << a2 << " " << a1;
    return 0;
}