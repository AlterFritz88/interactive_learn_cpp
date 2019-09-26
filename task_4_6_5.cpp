#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string temp, reversed;
    for  (int i = 0; i < n; i++){
        cin >> temp;
        reverse(temp.begin(), temp.end());
        cout << temp << " ";
    }
    return 0;
}