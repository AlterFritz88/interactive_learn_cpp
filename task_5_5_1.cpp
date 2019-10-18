#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> vec_str;
    string temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_str.push_back(temp);
    }
    reverse(vec_str.begin(), vec_str.end());
    for (auto i : vec_str){
        cout << i << " ";
    }
    return 0;
}