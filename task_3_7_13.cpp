#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool start = s[0] == toupper(s[0]);
    if (start) {
        for (int i = 0; i < s.size(); i++){
            if (i % 2 == 0){
                if (s[i] >= 'a' and s[i] <= 'z'){
                    cout << "NO";
                    return 0;
                }
            } else {
                if (s[i] >= 'A' and s[i] <= 'Z'){
                    cout << "NO";
                    return 0;
                }
            }
        }
    } else {
        for (int i = 0; i < s.size(); i++){
            if (i % 2 == 0){
                if (s[i] >= 'A' and s[i] <= 'Z'){
                    cout << "NO";
                    return 0;
                }
            } else {
                if (s[i] >= 'a' and s[i] <= 'z'){
                    cout << "NO";
                    return 0;
                }
            }
        }
    }
    cout << "YES";
    return 0;
}