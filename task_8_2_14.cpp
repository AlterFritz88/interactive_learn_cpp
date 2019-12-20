#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int islands = 1;
    string temp, s;
    cin >> s;
    for (int i = 0; i < n-1; i++){
        cin >> temp;

        if (temp[0] != s[s.size()-1]) s += temp;
        else {
            s = temp;
            islands++;

        }

    }
    cout << islands;
    return 0;
}