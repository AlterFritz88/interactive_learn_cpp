#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    sort(s.begin(), s.end() - s.size() / 2);
    cout << s;
    return 0;
}