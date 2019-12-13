#include <bits/stdc++.h>
using namespace std;
int main(){
    string temp;
    cin >> temp;
    int c = 0;
    for(int i = 0; i < temp.size() / 2; i++){
        if (temp[i] != temp[temp.size() - i - 1]) c++;
    }
    if (c > 1) {
        cout << "NO";
        return 0;
    }
    if (c == 0 and temp.size() % 2 == 1) {
        cout << "YES";
        return 0;
    }
    if (c == 1) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}