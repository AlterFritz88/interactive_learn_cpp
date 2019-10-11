#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp % 2 == 0){
            cout << temp;
            return 0;
        }
    }
    cout << "NO";
    return 0;
}