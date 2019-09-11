#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    set<char> se = {'A', 'E', 'I', 'O', 'U'};
    if (se.count(c)) cout << c << " - "<< "GLASNAYA";
    else cout << c << " - "<< "SOGLASNAYA";

    return 0;
}