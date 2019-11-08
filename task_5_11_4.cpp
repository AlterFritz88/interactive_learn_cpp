#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v1.push_back(temp);
    }
    for (int i = 0; i < n; i++){
        cin >> temp;
        v2.push_back(temp);
    }
    int max1, max2;
    max1 = *max_element(v1.begin(), v1.end());
    max2 = *max_element(v2.begin(), v2.end());

    if (max1 > max2){
        for (auto i : v1){
            cout << i << " ";
        }
    } else {
        for (auto i : v2){
            cout << i << " ";
        }
    }
    return 0;
}