#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, temp;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        int max = -100000;
        for(int j = 0; j < m; j++){
            cin >> temp;
            if (temp > max) max = temp;
        }
        cout << max << " ";
    }

    return 0;
}