#include <bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin >> c;
    for (int i = 65; i < int(c); i++){
        cout << char(i);
    }
    cout << endl;
    for (int i = int(c)+1; i <= 90; i++ ){
        cout << char(i);
    }
    return 0;
}