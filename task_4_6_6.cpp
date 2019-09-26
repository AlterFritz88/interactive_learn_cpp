#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        temp[0] = toupper(temp[0]);
        cout << temp << " ";
    }
    return 0;
}