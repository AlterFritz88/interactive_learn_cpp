#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y, z;
    for (int i = 0; i < 10; i++){
        cin >> x >> y >> z;
        cout << (x*x + y*y) * (x*x + y*y) + (y*y + z*z) * (y*y + z*z) + (x*x + z*z) * (x*x + z*z) << endl;
    }
    return 0;
}

