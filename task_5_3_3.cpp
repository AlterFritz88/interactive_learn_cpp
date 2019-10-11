#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, minus_sum = 0, plus_sum = 0;
    cin >> n;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp < 0) minus_sum += temp;
        if (temp > 0) plus_sum += temp;
        vec_int.push_back(temp);
    }
    cout << plus_sum << endl << minus_sum << endl;
    for (auto i : vec_int){
        cout << i << " ";
    }


    return 0;
}