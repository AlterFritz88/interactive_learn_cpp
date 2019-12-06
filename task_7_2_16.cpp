#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){
    if (x.second < y.second) return true;
    else if (x.second == y.second and x.first > y.first) return true;
    else return false;
}

int n, m, start, stop, k = 0;
vector<bool> v;
vector<int> p;
vector<vector <int>> g;
vector<vector<int>> ways;

void dfs(int x){
    v[x] = true;

    p.push_back(x);

    if (x == stop - 1){
        k++;
        //cout << k << ": ";
        vector<int> temp_way;
        for (auto r: p) {
            //cout << r+1 << " ";
            temp_way.push_back(r);
        }
        ways.push_back(temp_way);
        //cout << endl;
    }
    for (auto t: g[x]) if (!v[t]) dfs(t);
    p.pop_back();
    v[x] = false;
}

int main(){
    cin >> n >> m >> start >> stop;
    vector<vector <pair<int, int>>> a(n);
    int x, y, z;
    v.resize(n, false);
    g.resize(n);
    for (int i = 0; i < m; i++){
        cin >> x >> y >> z;
        a[x-1].push_back({y-1, z});
        a[y-1].push_back({x-1, z});
        g[x-1].push_back(y-1);
        g[y-1].push_back(x-1);
    }
//    for (int i = 0; i < n; i++){
//        sort(a[i].begin(), a[i].end(), cmp);
//        for (auto t: a[i]) cout << "{" << t.first + 1 << "," << t.second << "}";
//        cout << "\n";
//    }

    dfs(start-1);

    int min_way = 100000;
    for (auto way : ways){
        int sum = 0;
        for (int i = 0; i < way.size() - 1; i++){
            for (auto j : a[way[i]]){
                if (j.first == way[i+1]){
                    sum += j.second;
                }
            }
        }
        if (sum < min_way) min_way = sum;

    }
    cout << min_way;
    return 0;
}