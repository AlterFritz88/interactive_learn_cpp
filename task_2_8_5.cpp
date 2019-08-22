#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    vector<int> ans;
    cin >> n >> k;
    if (n / 100 != k) ans.push_back((n / 100));
    if (n / 10 % 10 != k) ans.push_back((n / 10 % 10));
    if (n % 10 != k) ans.push_back(n % 10);
    if (ans.size() == 0) {
        cout << 0;
        return 0;
    }
    int sum = 0;
    for (auto item : ans){
        sum += item;
    }
    if (sum == 0) {
        cout << 0;
        return 0;
    }
    for (auto item : ans){
        cout << item;
    }
    return 0;
}