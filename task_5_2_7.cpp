#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    vector<char> odd, norm;
    for (auto i : str){
        int ia = i - '0';
        if (ia % 2 == 0) {
            norm.push_back(i);
        }
        else odd.push_back(i);
    }
    cout << norm.size() << ":";
    for (auto i : norm){ cout << i;}

    cout << endl;
    cout << odd.size() << ":";
    for (auto i : odd){ cout << i;}
    return 0;
}