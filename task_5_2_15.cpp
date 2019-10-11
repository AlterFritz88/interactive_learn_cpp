#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    bool null = false;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (!null and temp == 0){
            null = true;
            continue;
        }
        if (null and temp != 0){
            cout << temp << " ";
        }
        if (null and temp == 0){
            return 0;
        }
    }

    return 0;
}