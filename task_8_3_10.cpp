#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> steps;
    for (int i = 0; i < n; i++){
        cin >> temp;
        steps.push_back(temp);
    }
    vector<int> ans;
    for (int i = 0; i < n - 1; i++){
        if (steps[i+1] <= steps[i]){
            ans.push_back(steps[i]);
        }
    }
    ans.push_back(steps[steps.size()-1]);
    cout << ans.size() << endl;
    for (auto i : ans){
        cout << i << " ";
    }
    return 0;
}