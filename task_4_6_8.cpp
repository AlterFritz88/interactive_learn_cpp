#include <bits/stdc++.h>
using namespace std;
int main(){
    string t;
    getline(cin,t);
    int cout_w = 0;
    istringstream iss(t);
    string word;
    while(iss >> word) {
        cout_w++;
    }
    cout << cout_w;
    return 0;
}