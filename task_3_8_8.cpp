#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size()/2; i++){
        cout << s[i] << s[s.size()-1-i] << endl;
    }
    return 0;
}