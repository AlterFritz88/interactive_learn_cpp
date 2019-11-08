#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n-1; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    if (vec[0] != 1){
        cout << 1;
        return 0;
    }

    if (vec[n-2] != n){
        cout << n;
        return 0;
    }


    for (int i = 0; i < n-1; i++){
        if (vec[i] + 1 != vec[i+1]){
            cout << vec[i] + 1;
            return 0;
        }
    }
    return 0;
}