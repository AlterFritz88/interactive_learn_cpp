#include <bits/stdc++.h>
using namespace std;
int main(){
    int first = 0, second = 0, temp;
    for (int i = 0; i < 1423; i++){
        cin >> temp;
        if (temp == 1) first++;
        else second++;
    }
    if (first > second) cout << "First" << endl;
    else cout << "Second" << endl;
    cout << first << " " << second;
    return 0;
}

