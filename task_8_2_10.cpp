#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, temp; cin >> n >> k;
    int c = 0;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp <= 5-k) c++;
    }
    cout << c / 3;
    return 0;
}