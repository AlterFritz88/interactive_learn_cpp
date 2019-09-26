#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string temp;
    vector<string> vec(n);
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    for (auto i : vec){
        cout << i << endl;
    }
    return 0;
}