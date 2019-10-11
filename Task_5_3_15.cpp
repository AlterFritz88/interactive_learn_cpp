#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin >> w;
    for (int i = 1; i <= w; i++){
        for (int j = 0; j < i; j++){
            cout << i%10;
        }
        cout << endl;
    }

    return 0;
}
