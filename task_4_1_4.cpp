#include <bits/stdc++.h>
using namespace std;
int main(){
    int max = INT_MIN, n, temp;
    vector<int> vec;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp > max) max = temp;
        vec.push_back(temp);
    }
    cout << max << endl;
    for (int i = 0; i < n; i++){
        if (vec[i] == max) cout << i + 1 << " ";
    }
    return 0;
}