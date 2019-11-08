#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++){
        cin >> temp;
        m[temp]++;
    }

    for (auto i: m){
        if (i.second == 1) {
            cout << i.first;
        }
    }
    return 0;
}