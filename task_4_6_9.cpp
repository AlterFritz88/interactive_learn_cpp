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
        vec.push_back(word);
    }

    for (int i = 0; i < vec.size(); i++){
        if (vec[i] == search_word) cout << i + 1 << " ";
    }
    return 0;
}