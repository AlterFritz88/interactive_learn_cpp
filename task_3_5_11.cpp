#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    set<int> ss;
    for (auto i : s){
        ss.insert(i);
    }
    char min = *ss.begin();
    char max = *--ss.end();
    //cout << min << " " << max;
    for (auto i : s){
        if (i == min or i == max) cout << i;
    }


    return 0;
}