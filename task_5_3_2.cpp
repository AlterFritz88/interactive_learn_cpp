#include <bits/stdc++.h>
using namespace std;
int main(){
    int a1, a2, a3, ret;
    cin >> a1 >> a2 >> a3 >> ret;

    if (ret % 3 == 0) cout << "No change";
    else if (ret < 0 and abs(ret) % 3 == 1) cout << a3 << endl << a1 << " " << a2;
    else if (ret > 0 and abs(ret) % 3 == 1) cout << a2 << endl << a3 << " " << a1;
    else if (ret < 0 and abs(ret) % 3 == 2) cout << a2 << endl << a3 << " " << a1;
    else if (ret > 0 and abs(ret) % 3 == 2) cout << a3 << endl << a1 << " " << a2;
    return 0;
}