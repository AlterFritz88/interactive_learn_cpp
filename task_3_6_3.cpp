#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i=i+2){
        if (s[i] > s[i+1]) cout << s[i];
        else cout << s[i+1];
    }
    return 0;
}