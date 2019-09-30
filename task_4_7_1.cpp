#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<string> set_string;
    for (int i = 0; i <= s.size() - 3; i++){

        if  (s[i] < s[i+1] and s[i+1] < s[i+2]){
            string ins = s.substr(i, 3);

            set_string.insert(s.substr(i, 3));
        }
    }
    cout << endl;
    for (auto i : set_string){
        cout << i << endl;
    }
    return 0;
}