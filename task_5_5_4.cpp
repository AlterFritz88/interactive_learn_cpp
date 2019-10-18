#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string temp;
    vector<string> vec_str;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_str.push_back(temp);
    }

    int next = 0, how = 1;
    vector<string> ans_vec;

    while (next < n){
        for (int i = next; i < next + how; i++){
            if (i >= n) break;
            ans_vec.push_back(vec_str[i]);
        }
        next += how + 1;
        how++;
    }
    cout << ans_vec.size() << endl;
    for (auto i : ans_vec){
        cout << i << " ";
    }
    return 0;
}