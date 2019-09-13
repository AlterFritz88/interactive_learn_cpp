#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int sum = 0;
    for (auto i : s){
        sum += int(i) - int('0');

    }
    cout << sum;
    return 0;
}