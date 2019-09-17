#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    
    for (int i : vec){
        if (i/10 < i%10) cout << i << " ";
    }
    cout << endl;
    for (int i : vec){
        if (i/10 > i%10) cout << i << " ";
    }
    cout << endl;
    for (int i : vec){
        if (i/10 == i%10) cout << i << " ";
    }

    return 0;
}`