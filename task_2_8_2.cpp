#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, next;
    cin >> temp;
    for (int i = 1; i < 20; i++){
        cin >> next;
        if (abs(temp - next) != 1){
            cout << "NO";
            return 0;
        }
        temp = next;
    }
    cout << "YES";
    return 0;
}