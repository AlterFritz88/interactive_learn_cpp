#include <bits/stdc++.h>
using namespace std;
int main(){
    int n_word, len, size = 0;
    cin >> n_word >> len;
    string temp;
    vector<string> vec_str;
    for (int i = 0; i < n_word; i++){
        cin >> temp;
        if (temp.size() == len){
            size++;
            vec_str.push_back(temp);
        }
    }

    cout << size << endl;
    for (auto i : vec_str){
        cout << i << " ";
    }
    return 0;
}