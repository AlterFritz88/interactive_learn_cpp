#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, max = INT_MIN;
    cin >> n;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp > max) max = temp;
        vec_int.push_back(temp);
    }
    int c = 0;
    for (int i = 0; i < n; i++){
        if (vec_int[i] == max) c++;
    }

    for (auto i : vec_int){
        if (i == max) cout << c << " ";
        else cout << i << " ";
    }
    return 0;
}