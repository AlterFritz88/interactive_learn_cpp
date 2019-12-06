#include <bits/stdc++.h>
using namespace std;
int n, k = 0;
set<int> a;
vector<set<int>> z;
set<int> v;
vector<vector<int>> g;

void dfs(int x){
    v.insert(x);
    a.insert(x);
    for (auto t: g[x]){
        if (v.find(t) == v.end()) dfs(t);
    }
}

int main(){
    int t, m;
    cin >> n;
    g.resize(n);
    for (int i = 0; i < n; i++){
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> t;
            g[i].push_back(t-1);
        }
    }
    for (int i = 0; i < n; i++){
        v.clear();
        if (a.find(i) == a.end()){
            dfs(i);
            z.push_back(v);
        }
    }
    int max = 0;
    for (int i = 0; i < z.size(); i++){
        if (z[i].size() > max) max = z[i].size();
    }
    cout << max;
    return 0;
}