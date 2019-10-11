#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<int> main_vec;
    vector<int> final_vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        main_vec.push_back(temp);
        if (temp >= 0) final_vec.push_back(temp);
    }

    reverse(main_vec.begin(), main_vec.end());

    for (auto i : main_vec){
        if (i < 0) final_vec.push_back(i);
    }
    reverse(main_vec.begin(), main_vec.end());
    for (int i = 0; i < n; i++){
        if (i == n - 1) cout << main_vec[i];
        else cout << main_vec[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++){
        if (i == n - 1) cout << final_vec[i];
        else cout << final_vec[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++){
        if (i == n - 1) cout << main_vec[i] + final_vec[i];
        else cout << main_vec[i] + final_vec[i] << " ";
    }
    return 0;
}