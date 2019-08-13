#include <bits/stdc++.h>
using namespace std;
int main(){
    int room;
    cin >> room;
    if ((room) % 4 == 0) cout << (room) / 4  << " ";
    else cout << ((room) / 4) + 1 << " ";
    switch (room % 4){
        case 0: cout << 3; break;
        case 1: cout << 4; break;
        case 2: cout << 1; break;
        case 3: cout << 2; break;
        default:
            break;
    }
    return 0;
}

