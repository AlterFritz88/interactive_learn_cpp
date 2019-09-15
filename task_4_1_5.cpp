#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    cout << vec[vec.size() - 1] << " ";
    for(int i = 0; i < n-1; i++){
        cout << vec[i] << " ";
    }
    return 0;
}