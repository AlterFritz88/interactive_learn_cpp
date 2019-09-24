#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> dict = {{'0', 0},
                           {'1', 0},
                           {'2', 0},
                           {'3', 0},
                           {'4', 0},
                           {'5', 0},
                           {'6', 0},
                           {'7', 0},
                           {'8', 0},
                           {'9', 0}};
    for (auto i : s){
        if (dict.find(i) == dict.end()) dict[i] = 1;
        else dict[i] += 1;
    }
    for (auto i : dict){

        if (i.second == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}