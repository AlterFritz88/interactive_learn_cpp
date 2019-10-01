#include <bits/stdc++.h>
using namespace std;

bool cmp(int x, int y){
    if ((x/10 + x%10) < (y/10 + y%10)) return true;
    if ((x/10 + x%10) == (y/10 + y%10) and x > y) return true;
    return false;
}

int main(){
    int n, temp;

    cin >> n;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_int.push_back(temp);
    }
    sort(vec_int.begin(), vec_int.end(), cmp);

    for (auto i : vec_int){
        cout << i << " ";
    }

    return 0;
}