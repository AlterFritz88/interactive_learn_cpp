#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int p_1 = a.find('(') + 1;
    int p_2 = a.find(')');

    for (int i = p_1; i < a.size(); i++){
        if (a[i] == ')') break;
        else cout << a[i];
    }
    return 0;
}

