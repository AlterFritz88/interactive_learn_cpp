#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for(auto item : a){
        cout << char(item + 1);
    }
    return 0;
}