#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, cont = 0;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    for (auto i : vec){
        if (i == vec[vec.size()-1]) cont++;
    }
    cout << cont;
    return 0;
}