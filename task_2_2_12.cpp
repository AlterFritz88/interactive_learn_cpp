#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        cout << temp / 10000  << temp / 1000 % 10 << " ";
    }
    return 0;
}

