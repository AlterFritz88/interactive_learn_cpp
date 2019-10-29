#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> temp;
            a[i][j] = temp;
        }
    }

    for (int k = n; k > -n; k--){
        vector<int> vec;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i == j + k){
                    vec.push_back(a[i][j]);
                    //cout << a[i][j] << ' ';
                }
            }
        }
        //reverse(vec.begin(), vec.end());
        for (auto i : vec){
            cout << i << " ";
        }
        cout << endl;
    }





    return 0;
}