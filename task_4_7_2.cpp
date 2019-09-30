#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<string> set_string;
    for (int i = 0; i <= s.size() - 2; i++){

        if  (int(s[i] + 1) == int(s[i+1]) and int(s[i+1] + 1) == int(s[i+2])){
            string ins = s.substr(i, 3);

            set_string.push_back(s.substr(i, 3));
        }
    }
    sort(set_string.begin(), set_string.end());
    for (auto i : set_string){
        cout << i << endl;
    }
    return 0;
}