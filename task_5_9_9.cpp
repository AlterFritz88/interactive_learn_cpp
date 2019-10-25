#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    vector<vector<int>> vec_vec;
    vector<int> temp_vec;
    vec[n] = 1 - vec[n-1];
    int k = 1;
    for (int i = 0; i < n; i++){
        if (vec[i] == vec[i+1]){
            cout << vec[i] << " ";
        }
        else {
            cout << vec[i] << " ";
            cout << endl;
        }
    }
    return 0;
}