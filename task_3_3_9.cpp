#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (auto item : a){
        if (item == 'A' or item == 'E' or item == 'I' or item == 'O' or item == 'U' or item == 'Y'){
            cout << item;
        }
    }
    return 0;
}