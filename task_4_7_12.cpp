#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    set<string> set_str;
    for (int i = 0; i < str.size() - 3; i++){
        if (str[i] + 1 == str[i+1] and str[i+1] + 1 == str[i+2]){
            set_str.insert(str.substr(i, 3));
        }
    }
    for (auto i : set_str){
        cout << i << endl;
    }
    return 0;
}