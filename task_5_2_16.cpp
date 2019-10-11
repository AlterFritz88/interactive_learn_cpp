#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_int.push_back(temp);
    }

    for (int i = 1; i < n-1; i++){
        if (vec_int[i-1] < vec_int[i] and vec_int[i] > vec_int[i+1]){
            cout << i;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}