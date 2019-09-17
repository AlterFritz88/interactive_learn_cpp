#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    set<int> s;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        s.insert(temp);
    }
    cout << s.size();
    return 0;
}