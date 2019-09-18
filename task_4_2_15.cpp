#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, delimeter;
    vector<int> vec;
    cin >> n >> delimeter;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    reverse(vec.end() - delimeter, vec.end());
    for (auto i : vec){
        cout << i << " ";
    }
    return 0;
}