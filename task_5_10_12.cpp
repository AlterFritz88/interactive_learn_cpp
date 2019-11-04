#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, temp; cin >> m;
    vector<int> vec;
    vector<pair<int, int>> par;

    int a, b;
    for (int i = 0; i < m; i++){
        cin >> a >> b;
        par.push_back(make_pair(a, b));
    }

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }


    for (int i = 0; i < m; i++){
        swap(vec[par[i].first], vec[par[i].second]);
    }

    for (auto i : vec){
        cout << i << " ";
    }
    return 0;
}