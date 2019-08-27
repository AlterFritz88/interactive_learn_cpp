#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int count = 0;
    vector<char> vec;
    for (auto c : a){
        if (int(c) > 47 and int(c) < 58){
            count++;
            vec.push_back(c);
        }
    }
    cout << count << endl;
    for (auto c : vec){
        cout << c;
    }
    return 0;
}