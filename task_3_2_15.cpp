#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (int i = 0; i < a.size() - 2; i++){
        if (a[i] < a[i+1] and a[i+1] < a[i+2]) {
            cout << a[i] << a[i+1] << a[i+2] << endl;
        }
    }
    return 0;
}