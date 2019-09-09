#include <bits/stdc++.h>
using namespace std;
int main(){
    string name;
    for (int i = 0; i < 5; i++){
        cin >> name;
        cout << char(toupper(name[0]));
        for (int j = 1; j < name.size(); j++){
            cout << name[j];
        }
        cout << " ";
    }

    return 0;
}