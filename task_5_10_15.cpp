#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        reverse(vec.begin() + a, vec.begin() + b + 1);

    }

    for (auto i : vec){
        cout << i << " ";
    }
    return 0;
}