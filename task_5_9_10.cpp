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
    vector<int> temp_vec, ans_vec;
    vec[n] = 1 - vec[n-1];
    int k = 1;
    int max_size = 0;
    for (int i = 0; i < n; i++){
        if (vec[i] < vec[i+1]){

            temp_vec.push_back(vec[i]);
        }
        else {
            temp_vec.push_back(vec[i]);
            if (temp_vec.size() > max_size){
                max_size = temp_vec.size();
                ans_vec = temp_vec;

            }
            temp_vec = {};
        }
    }

    for (auto i : ans_vec){
        cout << i << " ";
    }
    return 0;
}