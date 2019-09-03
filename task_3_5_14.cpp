#include <bits/stdc++.h>
using namespace std;
int main(){
    int yes = 0;
    for (int i = 0; i < 3; i++){
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j++){
            if (s[j] == '1' and s[j+1] == '2' and s[j+2] == '3'){
                cout << "YES" << endl;
                yes = 1;
                break;
            }
        }
        if (yes == 0) cout << "NO" << endl;
        else yes = 0;
    }
    return 0;
}