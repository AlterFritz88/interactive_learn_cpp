#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int count = 0;
    for (auto c : a){
        if (c != 'Z') cout << c;
    }
    return 0;
}
