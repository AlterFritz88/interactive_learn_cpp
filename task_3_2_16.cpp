#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (int i = 0; i < a.size() / 2 ; i++){
        cout << a[i] << a[a.size() - 1 - i] << endl;
    }

    return 0;
}