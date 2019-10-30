#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, c = 0;
    int a[30];
    for (int i = 0; i < 20; i++){
        cin >> temp;
        a[i] = temp;
    }
    for (int i = 0; i < 19; i++){
        if ((a[i] + a[i+1]) % 2 == 0 and (a[i] + a[i+1]) % 4 != 0){

            c++;
        }
    }
    cout << c;
    return 0;

}