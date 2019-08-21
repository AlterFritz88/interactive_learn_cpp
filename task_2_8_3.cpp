#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, rep=0;
    vector<int> a;
    set<int> s;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        a.push_back(temp);
        if (s.count(temp)) rep = temp;
        else s.insert(temp);
    }

    for (int i = 0; i < 5; i++){
        if (a[i] == rep){
            cout << i + 1 << " ";
        }
    }
    return 0;
}