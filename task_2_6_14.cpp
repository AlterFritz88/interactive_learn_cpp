#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int count = 0;
    for (auto i: a) {
        switch (i){
            case '0' : count++; break;
            case '6' : count++; break;
            case '9' : count++; break;
            case '8' : count = count + 2; break;
            default:
                break;
        }
    }
    cout << count;
    return 0;
}