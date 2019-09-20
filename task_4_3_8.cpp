#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> temp;
        if (temp == 0){
            cout << i;
            return 0;
        }
    }
    return 0;
}