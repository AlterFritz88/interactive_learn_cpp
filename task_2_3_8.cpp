#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b;
    cin >> a >> b;

    if ((a % 10 != b % 10) and ((a / 10 == b / 10))) printf("YES");
    else printf("NO");
    return 0;
}

