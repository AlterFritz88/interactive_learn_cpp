#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char init = s[0];
    int count = 1;
    for (int i = 1; i < s.size(); i++){
        if (s[i] == init) count ++;
    }
    cout << count;
    return 0;
}