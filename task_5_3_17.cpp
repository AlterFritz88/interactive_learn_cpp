#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int digits[] = {2, 3, 5, 7};
    for(int i = 0; i < 4; i++)
        while(n % digits[i] == 0)
            n /= digits[i];
    cout << (n == 1 ? "Yes" : "No");
    return 0;
}