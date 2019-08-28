#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (int i = a.size() / 2; i < a.size(); i++){
        cout << a[i];
    }
    return 0;
}