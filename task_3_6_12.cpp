#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char pattern = s[0];
    for (int i = 1; i < s.size(); i++){
        if (s[i] != pattern){
            cout << "NO";
            return 0;
        }

    }
    cout << "YES";
    return 0;
}