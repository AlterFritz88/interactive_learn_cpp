#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> a;
    string temp;
    for (int i = 0; i < 4; i++){
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < 4; i++){
        cout << a[i] << endl;
    }
    return 0;
}