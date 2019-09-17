#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    set<int> s;
    vector<int> vec;
    map<int, int> m;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        m[temp] = 0;
        vec.push_back(temp);
        s.insert(temp);
    }
    for (auto i : vec){
        m[i]++;
    }
    int max = 0;
    for(auto i : s){
        if(m[i] > max) max = m[i];
    }
    cout << max;
    return 0;
}