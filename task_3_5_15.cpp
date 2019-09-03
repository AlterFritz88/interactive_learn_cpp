#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    char a, b;
    cin >> a >> b;
    int count = 0;
    for (auto i : s){
        if (i == a or i == b) count++;
    }
    cout << count;
    return 0;
}