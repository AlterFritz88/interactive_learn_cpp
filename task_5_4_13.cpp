#include <bits/stdc++.h>
using namespace std;
int main(){
    int last, n, add = 1, temp;
    cin >> last >> n;
    vector<int> vec_int;
    vec_int.push_back(last);
    for (int i = 0; i < n - 1; i++){
        last += add;
        vec_int.push_back(last);
        add++;
    }
    reverse(vec_int.begin(), vec_int.end());
    for (auto i : vec_int){
        cout << i << " ";
    }
    return 0;
}