#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i += 2){
        cout << a[i] << a[i+1] << " ";
    }
    return 0;
}