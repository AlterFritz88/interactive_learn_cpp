#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << i + 1 << " + " << n - i << " = " << n + 1 << endl;
    }

    return 0;
}