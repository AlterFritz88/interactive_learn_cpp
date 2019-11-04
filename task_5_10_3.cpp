#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, m; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    cin >> m;
    vector<int> main_v;
    for (int i = 0; i < m; i++){
        cin >> temp;
        main_v.push_back(temp);
    }

    for (auto i : vec){
        cout << main_v[i] << " ";
    }
    return 0;
}