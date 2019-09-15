#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int plus_pos = s.find('+');
    long long n1 = stoll(s.substr(0, plus_pos));
    long long n2 = stoll(s.substr(plus_pos+1, s.size() - plus_pos));
    cout << n1 + n2;
    return 0;
}