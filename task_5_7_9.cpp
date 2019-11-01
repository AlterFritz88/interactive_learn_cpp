#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, sum = 0, max_sum = 0;
    vector<int> vec;
    for (int i = 0; i < 20; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    vector<vector<int>> vec_vec;
    vector<int> temp_vec, ans_vec;
    vec[20] = 1 - vec[20-1];
    int k = 1;
    int max_size = 0;
    for (int i = 0; i < 20; i++){
        if (vec[i] < vec[i+1]){
            temp_vec.push_back(vec[i]);
            sum += vec[i];
        }
        else {
            temp_vec.push_back(vec[i]);
            sum += vec[i];
            if (temp_vec.size() == max_size and sum > max_sum){
                max_size = temp_vec.size();
                ans_vec = temp_vec;
                max_sum = sum;
            }
            if (temp_vec.size() > max_size){
                max_size = temp_vec.size();
                ans_vec = temp_vec;
                max_sum = sum;
            }
            sum = 0;
            temp_vec = {};

        }
    }
    int c = 0;
    for (auto i : ans_vec){
        c += i;
    }
    cout << c;
    return 0;
}