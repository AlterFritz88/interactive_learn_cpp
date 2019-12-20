#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int c = 0, ans1, ans2;
    for (int a = 0; a <= 1000; a++){
        for (int b = 0; b <= 1000; b++){
            ans1 = a * a + b;
            ans2 = a + b * b;
            if (ans1 == n and ans2 == m) c++;
        }
    }
    cout << c;
    return 0;
}