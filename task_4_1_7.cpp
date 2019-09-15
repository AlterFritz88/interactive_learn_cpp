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

    int maxs = 0;
    for (int i = 1; i < n - 1; i++){
        if (vec[i] > vec[i-1] and vec[i] > vec[i+1]) maxs++;
    }
    cout << maxs;
    return 0;
}