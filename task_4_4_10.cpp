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


    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), back_inserter(intersec));


    if (intersec.size() == 0) cout << "EMPTY";
    else {
        cout << intersec;
    }

    return 0;
}

