#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> s1, s2;
    for (int i = 0; i < n; i++){
        cin >> temp;
        s1.push_back(temp);
    }
    for (int i = 0; i < n; i++){
        cin >> temp;
        s2.push_back(temp);
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2){
        cout << "YES";
    } else cout << "NO";
    return 0;
}