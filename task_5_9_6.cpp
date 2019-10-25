#include <bits/stdc++.h>
using namespace std;

int sum(int x){
    int s = 0;
    x = abs(x);
    while (x > 0){
        s += x % 10;
        x /= 10;
    }
    return s;
}


int main(){
    int n, s, temp;
    cin >> n >> s;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (sum(temp) == s) vec_int.push_back(temp);
    }
    cout << vec_int.size() << endl;
    for (auto i : vec_int){
        cout << i << " ";
    }
    return 0;
}