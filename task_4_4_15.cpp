

#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b, diff_1, diff_2;
    set<char> s1, s2;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        s1.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++){
        s2.insert(b[i]);
    }
    if (includes(s2.begin(), s2.end(), s1.begin(), s1.end())) cout << "YES";
    else cout << "NO";
    return 0;
}