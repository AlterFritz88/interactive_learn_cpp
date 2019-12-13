#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    string bins =  bitset<32>(n).to_string();
    int c = 0;
    for (auto i : bins){
        if (i == '1') c++;
    }
    cout << c;
    return 0;
}