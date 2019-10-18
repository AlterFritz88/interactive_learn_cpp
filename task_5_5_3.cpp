#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string temp;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        for (int j = 0; j < temp.size(); j++){
            if (j == 0) cout << char(toupper(temp[j]));
            else cout << char(tolower(temp[j]));
        }
        cout << " ";
    }
    return 0;
}