#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, a, temp;
    cin >> n;
    cin >> a;
    for (int i = 0; i < n-1; i++){
        cin >> temp;
        if (temp != a){
            if (a < temp){
                cout << a << " " << temp;
            }
            else {
                cout << temp << " " << a;
            }
            return 0;
        }
    }
    return 0;
}