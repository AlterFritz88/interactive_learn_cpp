#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, a2;
    cin >> a >> a2;
    cout << min(a, a2) << "*" << min(a, a2) << "=" << max(a, a2);
    return 0;
}