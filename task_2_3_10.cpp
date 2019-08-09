#include <bits/stdc++.h>
using namespace std;
int main(){
    int count  = 0, a;

    for (int i = 0; i < 10; i++) {
        cin >> a;
        if (a == 5 or a == 6) count++;
    }
    cout << count;
    return 0;
}