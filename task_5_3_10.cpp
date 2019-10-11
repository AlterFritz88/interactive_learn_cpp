#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    pair<int, int> min = {100000, -1};
    pair<int, int> max = {-1000, -1};
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_int.push_back(temp);
        if (temp > max.first) max = {temp, i};
        if (temp < min.first) min = {temp, i};
    }

    int start, final;
    if (min.second < max.second){
        start = min.second;
        final = max.second;
    } else {
        start = max.second;
        final = min.second;
    }

    for (; start <= final; start++){
        cout << vec_int[start] << (start <= final - 1 ? ' ' : '\n');
    }

    return 0;
}