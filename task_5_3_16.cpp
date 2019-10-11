#include <bits/stdc++.h>
using namespace std;
int main(){
    int w;
    cin >> w;
    int c = 1;
    for (int i = w; i >= 0; i--){
        for (int j = 0; j < i; j++){
            cout << c%10;
        }
        c++;
        cout << endl;
    }

    return 0;
}