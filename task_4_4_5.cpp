#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string temp_str;
    set<string> string_set;
    for (int i = 0; i < n; i++){
        cin >> temp_str;
        string_set.insert(temp_str);
    }
    for (auto i : string_set){
        cout << i << " ";
    }
    return 0;
}