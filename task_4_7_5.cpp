#include <bits/stdc++.h>
using namespace std;

bool cmp (string x, string y){
    int a_x = 0, a_y = 0;
    for (auto i : x){
        if (i == 'a') a_x++;
    }
    for (auto i : y){
        if (i == 'a') a_y++;
    }
    if (a_x > a_y) return true;
    else if (a_x == a_y and x < y) return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<string> vec_str;
    string temp;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_str.push_back(temp);
    }


    sort(vec_str.begin(), vec_str.end(), cmp);
    for(auto i : vec_str){
        cout << i << endl;
    }
    return 0;
}