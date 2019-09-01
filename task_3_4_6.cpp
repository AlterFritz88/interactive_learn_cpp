#include <bits/stdc++.h>
using namespace std;
int main(){
    int p1, p2;
    string s, t;
    cin >> s >> t;
    p1 = s.find(t, 0);
    p2 = s.find((t, p1+1));
    cout << p1 << " " << p2;
    return 0;
}