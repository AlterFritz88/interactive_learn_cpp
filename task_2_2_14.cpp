#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;
    cout << n << endl;
    for (int i = 1; i < 10; i++){
        n = n / 10;
        cout << n << endl;
    }
    return 0;
}
