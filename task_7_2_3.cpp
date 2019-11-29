#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, temp;
    bool in = false;
    vector<vector<int>> global_graph;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        vector<int> temp_vec;
        for (int j = 0; j < 2; j++){
            cin >> temp;
            temp_vec.push_back(temp);
        }
        sort(temp_vec.begin(), temp_vec.end());
        for (auto i : global_graph){
            if (i == temp_vec){
                in = true;
                break;
            }
        }
        if (!in){
            global_graph.push_back(temp_vec);
        }
        in = false;
    }
    cout << global_graph.size();
    return 0;
}