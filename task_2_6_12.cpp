#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    set<int> a1;
    set<int> a2;
    a1.insert(a / 100);
    a1.insert(a / 10 % 10);
    a1.insert(a % 10);
    a2.insert(b / 100);
    a2.insert(b / 10 % 10);
    a2.insert(b % 10);
    vector<int> a3;
    set_symmetric_difference(a1.begin(), a1.end(), a2.begin(), a2.end(), back_inserter(a3));
    for (auto i: a3){
        cout << i << " ";
    }

    return 0;
}