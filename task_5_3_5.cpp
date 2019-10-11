#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, x, count = 1;
    cin >> n >> x;
    int temp_mux = x;
    while (temp_mux <= n){
        temp_mux *= x;
        count++;
    }

    cout << temp_mux << endl << count;
    return 0;
}