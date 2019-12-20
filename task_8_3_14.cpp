#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> v;
    int chet = 0, ne_chet = 0;
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
        if (temp % 2 == 0) chet++;
        else ne_chet++;
    }
    if (chet > ne_chet){
        for (int i = 0; i < n; i++){
            if (v[i] % 2 == 1) {
                cout << i+1;
                break;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++){
            if (v[i] % 2 == 0) {
                cout << i+1;
                break;
            }
        }
    }

    return 0;
}