#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, temp1, temp2; cin >> n;
    if (n == 1){
        cin >> temp1 >> temp2;
        cout << "YES";
        return 0;
    }

    vector<set<int>> vec_set;
    vector<int> common_data;
    for (int i = 0; i < n; i++){
        cin >> temp1 >> temp2;
        set<int> temp_set;
        for (int j = temp1; j <= temp2; j++){
            temp_set.insert(j);
        }
        vec_set.push_back(temp_set);
    }

    set_intersection(vec_set[0].begin(), vec_set[0].end(), vec_set[1].begin(), vec_set[1].end(), std::back_inserter(common_data));


    for (int i = 1; i < n-1; i++){
        set_intersection(vec_set[i].begin(), vec_set[i].end(), vec_set[i+1].begin(), vec_set[i+1].end(), std::back_inserter(common_data));
    }

    if (common_data.size() != 0){
        cout << "YES";
    } else cout << "NO";

    return 0;
}