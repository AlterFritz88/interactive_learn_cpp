#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<string> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        string a = to_string(temp);
        vec.push_back(a);
    }
    for (auto i : vec){
        if (i.size() == 1) cout << i << " ";
    }
    for (auto i : vec){
        if (i.size() == 2) cout << i << " ";
    }
    for (auto i : vec){
        if (i.size() == 3) cout << i << " ";
    }
    return 0;
}