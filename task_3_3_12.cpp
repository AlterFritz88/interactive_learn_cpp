#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (auto item : a){
        if (item == 'W' or item == 'V'){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}