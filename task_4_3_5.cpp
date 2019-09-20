#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp == 5 or temp == 6) count++;
    }
    cout << count;
    return 0;
}