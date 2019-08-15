#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    set<int> A;
    set<int> B;
    A.insert(a / 100);
    A.insert(a / 10 % 10);
    A.insert(a % 10);
    B.insert(b / 100);
    B.insert(b / 10 % 10);
    B.insert(b % 10);
    if (A == B) cout << "YES";
    else cout << "NO";
    return 0;
}