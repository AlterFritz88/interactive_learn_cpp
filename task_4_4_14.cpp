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
    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), std::back_inserter(diff_1));
    set_difference(s2.begin(), s2.end(), s1.begin(), s1.end(), std::back_inserter(diff_2));

    if (diff_1.size() == 0 and diff_2.size() == 0) cout << "EMPTY";
    else {
        cout << diff_1 << diff_2;
    }

    return 0;
}