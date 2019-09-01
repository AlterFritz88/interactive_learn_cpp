#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (auto i : a){
        int n = int(i) - 48;
        if (n % 2 == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}