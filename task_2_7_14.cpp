#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "-";
    for (int i = 1; i < n / 2; i++) cout << "O";
    cout << endl;
    cout << ">-@";
    for (int i = 3; i < n / 2; i++) cout << "O";
    return 0;
}

