#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, sum1 = 0, sum2 = 0; cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v1.push_back(temp);
        sum1 += temp;
    }
    for (int i = 0; i < n; i++){
        cin >> temp;
        v2.push_back(temp);
        sum2 += temp;
    }


    if (sum1 > sum2){
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