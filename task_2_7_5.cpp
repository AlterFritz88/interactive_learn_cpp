#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, home = 0, head = 0, pocket = 0;
    for (int i = 0; i < 30; i++){
        cin >> temp;
        if (temp < 0) head++;
        else if (temp > 0) home++;
        else pocket++;
    }
    cout << "home: " << home << endl;
    cout << "head: " << head << endl;
    cout << "pocket: " << pocket;
    return 0;
}