#include <bits/stdc++.h>
using namespace std;
int main(){
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int p1 = 2 * d1 + 2 * d2;
    int p2 = 2 * d1 + 2 * d3;
    int p3 = 2 * d2 + 2 * d3;
    int p4 = d1 + d2 + d3;
    cout << min(p1, min(p2, min(p3, p4)));

    return 0;
}