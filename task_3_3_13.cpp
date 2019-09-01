#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    set<char> s = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    for (auto i : a){
        if (s.count(i)) continue;
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}