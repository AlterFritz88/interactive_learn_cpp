#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        cout << temp / 10000 << temp % 10 << " ";
    }
    return 0;
}