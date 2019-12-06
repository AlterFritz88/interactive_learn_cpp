#include <bits/stdc++.h>
using namespace std;

int n, k;

bool check(int num){
    int c = 0;
    while (num > 0){
        if (num % 10 == 4 or num % 10 == 7){
            c++;
        }
        num /= 10;
    }
    return c <= k;
}

int main(){
    cin >> n >> k;
    int ans = 0, temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (check(temp)) ans++;
    }
    cout << ans;
    return 0;
}