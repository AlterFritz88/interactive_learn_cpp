#include <bits/stdc++.h>
using namespace std;
int main(){
    char temp, b;
    cin >> temp;
    cout << temp;
    for (int i = 0; i < 5; i++){
        cin >> b;
        if (b != temp) cout << " " << b;
        else cout << b;
        temp = b;
    }
    return 0;
}

