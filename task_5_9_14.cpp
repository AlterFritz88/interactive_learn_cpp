#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, number; cin >> n;
    vector<int> vec, new_vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> number;

    for (int i = 0; i < n; i++){
        if (vec[i] != number){
            new_vec.push_back(vec[i]);
        }
    }
    if (new_vec.size() == 0) cout << "EMPTY";
    else {
        for (auto i : new_vec){
            cout << i << " ";
        }
    }
    return 0;
}