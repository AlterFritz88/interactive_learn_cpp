#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, number, temp, min_del = INT_MAX, ans = 0;
    vector<int> vec;
    cin >> n;
    cin >> number;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (auto i : vec){
        if (abs(number - i) <= min_del){
            min_del = abs(number - i);
            ans = i;
        }
    }
    cout << ans;
    return 0;
}