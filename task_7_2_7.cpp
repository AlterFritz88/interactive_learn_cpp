#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, row; cin >> n;
    vector<vector<int>> total;
    for (int i = 0; i < n; i++){
        vector<int> temp_vec;
        for (int j = 0; j < n; j++){
            cin >> temp;
            if (temp == 1) temp_vec.push_back(j+1);
        }
        total.push_back(temp_vec);
    }
    cout << total.size() << endl;
    for (auto i : total){
        cout << i.size() << " ";
        for (auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}