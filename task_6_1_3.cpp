#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    vector<int> vec;
    for (int i = 0; i < 4; i++){
        cin >> t;
        vec.push_back(t);
    }
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for (auto i : vec){
        cout << i << " ";
    }
    return 0;
}