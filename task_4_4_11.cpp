#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b;
    set<char> s1, s2;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        s1.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++){
        s2.insert(b[i]);
    }
    if (s1.size() == s2.size()) cout << "A=B";
    else if (s1.size() > s2.size()) cout << "A>B";
    else cout << "A<B";
    return 0;
}