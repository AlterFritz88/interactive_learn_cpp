#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    int a, b;
    cin >> a >> b;

    for (int i = b; i >= a; i--){
        cout << vec[i] << " ";
    }
    return 0;
}