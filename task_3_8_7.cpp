#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        if (isdigit(i)) cout << i << i;
        else cout << i;
    }
    return 0;
}