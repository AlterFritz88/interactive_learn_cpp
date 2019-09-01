#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (auto i : s){
        if (i == 'a') a++;
        else b++;
    }
    cout << a;
    for(int i = 0; i < a; i++){
        cout << 'a';
    }
    cout << endl;
    cout << b;
    for(int i = 0; i < b; i++){
        cout << 'b';
    }

    return 0;
}