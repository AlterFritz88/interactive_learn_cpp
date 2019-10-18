#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, count = 0;
    vector<vector<int>> vec;
    vector<int> base_vec;
    cin >> n;
    int a, b;
    cin >> a >> b;

    for (int i = 0; i < n; i++){
        cin >> temp;
        base_vec.push_back(temp);
    }

    for (int i = 0; i < n-1; i++){
        for (int j = i + 2; j <= n; j++){
            vector<int> temp_vec;
            temp_vec = vector<int>(base_vec.begin()+i, base_vec.begin()+j);
            if (temp_vec[0] == a and temp_vec[temp_vec.size()-1] == b) count++;
            vec.push_back(temp_vec);
        }
    }

    cout <<  count;
    return 0;
}
