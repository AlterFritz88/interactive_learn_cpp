#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, c = 0;
    cin >> n;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp % 2 == 0) c++;
        vec_int.push_back(temp);
    }

    for (auto i : vec_int){
        if (i % 2 == 0) cout << c << " ";
        else cout << i << " ";
    }
    return 0;
}