#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++){
        cin >> temp;
        m[temp] += 1;
    }
    int max = 0;
    for (auto i: m){
        if (i.second > max) max = i.second;
    }
    cout << max;
    return 0;
}