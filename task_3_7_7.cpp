#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int max;
    if (s1.size() > s2.size()) max = s1.size();
    else max = s2.size();
    for (int i = 0; i < max; i++){
        if (toupper(s1[i]) != toupper(s2[i])){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}