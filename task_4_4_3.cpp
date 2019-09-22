#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++){
        cin >> temp;
        s.insert(temp/10 + temp%10);
    }
    for (int i : s){
        cout << i << " ";
    }
    return 0;
}