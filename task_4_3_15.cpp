#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    for (int i = 0; i < n-1; i++){
        if ((vec[i] * 2) == vec[i+1]) cout << vec[i] << " ";
    }
    return 0;
}