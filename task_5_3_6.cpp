#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, max = 0;
    cin >> n;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_int.push_back(temp);
        if (temp > max) max = temp;
    }

    max--;
    while (vec_int.end() == find (vec_int.begin(), vec_int.end(), max)){
        max--;
    }
    cout << max << endl;
    for (auto i : vec_int){
        cout << i << " ";
    }
    return 0;
}