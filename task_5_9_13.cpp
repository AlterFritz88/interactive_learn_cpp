#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (i % 2 == 0){
            for (int j = 0; j < temp; j++) cout << 1 << " ";
        } else {
            for (int j = 0; j < temp; j++) cout << 0 << " ";
        }
    }
    return 0;
}