#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    set<int> s;
    for (int i = 0; i < 10; i++){
        cin >> temp;
        s.insert(temp);
    }
    for (auto item : s){
        cout << item << " ";
    }
    return 0;
}
