#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() > s2.size()){

        for (int i = 0; i < s2.size(); i++){
            cout << s1[i];
        }
        cout << endl;
        cout << s2 << endl;
    }
    else {
        cout << s1 << endl;
        for (int i = 0; i < s1.size(); i++) {
            cout << s2[i];
        }
    }
    return 0;
}