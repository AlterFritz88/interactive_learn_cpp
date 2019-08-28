#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++){
        if (a[i] == 'a') cout << "z";
        else cout << a[i];
    }
    return 0;
}