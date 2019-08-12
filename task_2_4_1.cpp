#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        if (temp > 99 or temp < 10){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}

