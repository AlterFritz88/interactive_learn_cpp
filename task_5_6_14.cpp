#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    int groups = 0;
    vector<int> two, one;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp == 1) one.push_back(temp);
        else two.push_back(temp);
    }

    while (not two.empty()){
        if (not one.empty()){
            groups++;
            one.erase(one.begin());
            two.erase(two.begin());
        } else break;
    }

    temp = 0;
    while (not one.empty()){
        temp++;
        if (temp == 3){
            temp = 0;
            groups++;
        }
        one.erase(one.begin());
    }
    cout << groups;

    return 0;
}