#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    int nums = 0;
    bool zero = false;
    if (str[0] == '0') zero = true;
    for (int i = 0; i < str.size(); i++){
        if (zero == false) {
            cout << str[i];
            nums++;
            continue;
        }
        if (zero == true and str[i] != '0'){
            cout << str[i];
            zero = false;
            nums++;
        }
    }
    if (nums == 0) cout << 0;
    return 0;
}