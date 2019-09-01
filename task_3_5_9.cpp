#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size()){
        cout << s1 << endl << s2;
    } else if (s1.size() < s2.size()){
        for (int i = 0; i < s2.size() - s1.size(); i++) cout << s1[0];
        cout << s1 << endl;
        cout << s2;
    } else {
        cout << s1 << endl;
        for (int i = 0; i < s1.size() - s2.size(); i++) cout << s2[0];
        cout << s2;
    }
    return 0;
}