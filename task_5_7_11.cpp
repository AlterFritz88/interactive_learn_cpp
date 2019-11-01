#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "";
    char temp;
    cin >> temp;
    while (temp != '.'){
        if (temp != ' '){
            s += toupper(temp);
        }
        cin >> temp;
    }
    cout << s;

    return 0;
}