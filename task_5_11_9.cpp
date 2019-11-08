#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> init, final;
    for (int i = 0; i < n; i++){
        cin >> temp;
        init.push_back(temp);
    }
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        final.push_back(temp);
    }
    sort(final.begin(), final.end());
    for (auto i : final){
        cout << init[i] << " ";
    }
    return 0;
}