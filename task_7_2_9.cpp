#include <bits/stdc++.h>
using namespace std;
int n, a, b, k = 0;
int c = 0;
vector<bool> v;
vector<int> p;
vector<vector <int>> g;
void dfs(int x){
    v[x] = true;
    p.push_back(x);
    if (x == b-1){
        k++;
        c++;
    }
    for (auto t: g[x]) if (!v[t]) dfs(t);
    p.pop_back();
    v[x] = false;
}
int main(){
    int t, m;
    cin >> n >> a >> b;
    v.resize(n, false);
    g.resize(n);
    for (int i = 0; i < n; i++){
        cin >> m;
        for (int j = 0; j < m; j++){
            cin >> t;
            g[i].push_back(t-1);
        }
    }
    dfs(a-1);
    cout << c;
    return 0;
}