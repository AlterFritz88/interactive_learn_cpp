#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin >> n;

    int floors = 1;
    int max_floor = 1;
    for (auto i : n){
        if (i == '1'){
            floors++;
            if (floors > max_floor) max_floor = floors;
        }
        else {
            if (floors > 1) floors--;
        }
    }
    cout << max_floor;
    return 0;
}