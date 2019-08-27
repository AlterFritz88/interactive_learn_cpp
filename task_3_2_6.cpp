#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int count_W = 0, count_w = 0;
    for (auto c : a){
        if (int(c) > 64 and int(c) < 91){
            count_W++;
        }
        if (int(c) > 96 and int(c) < 123){
            count_w++;
        }
    }
    cout << abs(count_w - count_W) << endl;

    return 0;
}