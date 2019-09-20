#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, a, b, n;
    cin >> n;
    cin >> a >> b;
    int diff = b - a;
    for (int i = 2; i < n; i++){
        cin >> temp;
        if (temp - b != diff){
            cout << "NO";
            return 0;
        } else b = temp;
    }
    cout << "YES" << endl << diff;
    return 0;
}