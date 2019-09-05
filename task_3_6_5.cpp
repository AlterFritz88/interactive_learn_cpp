#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i = i + 5){
        vector<char> v;
        for (int j = 0; j < 5; j++){
            v.push_back(s[i+j]);
        }
        reverse(v.begin(), v.end());
        for (auto k : v){
            cout << k;
        }
    }
    return 0;
}