#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, mark;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> mark;
        if (mark < 50) cout << 'R';
        else if (mark > 49 and mark < 70) cout << 'B';
        else if (mark > 69 and mark < 90) cout << 'Y';
        else cout << "G";

    }
    return 0;
}