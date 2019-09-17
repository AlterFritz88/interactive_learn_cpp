#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, max = INT_MIN;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp > max) max = temp;
        vec.push_back(temp);
    }
    cout << max << " ";
    for (int i = n - 1; i >= 0; i--){
        if (vec[i] == max){
            cout << i;
            return 0;
        }
    }
    return 0;
}