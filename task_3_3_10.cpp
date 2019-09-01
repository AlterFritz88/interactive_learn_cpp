#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (auto item : a){
        if (item != 'A' and item != 'E' and item != 'I' and item != 'O' and item != 'U' and item != 'Y'){
            cout << item;
        }
    }
    return 0;
}