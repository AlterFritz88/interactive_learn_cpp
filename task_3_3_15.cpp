#include <bits/stdc++.h>
using namespace std;
int main(){
    char n;
    cin >> n;
    string s;
    cin >> s;
    s.erase(std::remove(s.begin(), s.end(), n),
              s.end());
    if (s.size() == 0) {
        cout << "0";
        return 0;
    } else {
        vector<char> v;
        int zeros = 0;
        for (auto i : s){
            if (i != '0' and zeros == 0) {
                v.push_back(i);
                zeros = 1;
                continue;
            }
            if (i == '0' and zeros == 1) {
                v.push_back(i);
                continue;
            }
            if (i != '0' and zeros == 1) v.push_back(i);
        }
        if (v.size() == 0) cout << 0;
        else {
            for (auto i : v){
                cout << i;
            }
        }
    }

    return 0;
}