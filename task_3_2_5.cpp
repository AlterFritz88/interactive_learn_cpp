#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin >> a;
    int count = 0;
    vector<char> vec;
    for (auto c : a){
        if (int(c) > 64 and int(c) < 91){
            count++;
            vec.push_back(c);
        }
    }
    cout << count << endl;

    return 0;
}