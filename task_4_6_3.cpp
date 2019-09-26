#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> s(n);
    int max_len = 0;
    string temp, big_word;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp.size() > max_len){
            max_len = temp.size();
            big_word = temp;
        }
    }
    cout << big_word;
    return 0;
}