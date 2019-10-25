#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<int > a(n+1), b;
    for (int i = 0; i < n; i++) cin >> a[i];
    a[n] = 1 - a[n-1];
    int k = 1;
    for (int i = 0; i < n; i++){
        if (a[i] == a[i+1]) k++;
        else {
            b.push_back(k); k = 1;
        }
    }
    cout << b.size() << endl;
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    return 0;
}