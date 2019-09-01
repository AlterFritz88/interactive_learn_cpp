#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (auto item : a){
        if (item != 'Z' and item != 'A'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}