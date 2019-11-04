#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    int a, b, sum = 0;
    cin >> a >> b;

    for (int i = a; i <= b; i++){
        sum += vec[i];
    }
    cout << sum;
    return 0;
}