#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, sum1 = 0, sum2 = 0; cin >> n;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v1.push_back(temp);
        if (temp % 2 == 1){
            sum1++;
        }
        
    }
    for (int i = 0; i < n; i++){
        cin >> temp;
        v2.push_back(temp);
        if (temp % 2 == 1){
            sum2++;
        }
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