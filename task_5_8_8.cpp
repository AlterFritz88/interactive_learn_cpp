#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, temp; cin >> n >> m;
    for (int i = 0; i < n; i++){
        vector<int> vec;
        for (int j = 0; j < m; j++){
            cin >> temp;
            vec.push_back(temp);
        }
        sort(vec.begin(), vec.end());
        for (auto k : vec){
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}