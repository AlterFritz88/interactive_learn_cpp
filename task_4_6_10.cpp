#include <bits/stdc++.h>
using namespace std;
int main(){
    string t;
    getline(cin,t);
    istringstream iss(t);
    string word, search_word;
    cin >> search_word;
    vector<string> vec;
    while(iss >> word) {
        if (word != search_word) cout << word << " ";
    }


    return 0;
}