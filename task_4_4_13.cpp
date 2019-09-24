#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, b, intersec;
    set<char> s1, s2;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++){
        s1.insert(a[i]);
    }
    for (int i = 0; i < b.size(); i++){
        s2.insert(b[i]);
    }
    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), std::back_inserter(intersec));
    cout << intersec;
    return 0;
}