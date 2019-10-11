#include <bits/stdc++.h>
using namespace std;
vector<int> vec_int;
int n, temp;

int print_out(int i, int con){
    string s = "";
    for (int j = 0; j < con; j++){
        if (i < n){
            s += to_string(vec_int[i]) + " ";
            i++;
        }
    }
    cout << s.substr(0, s.size()-1);
    cout << endl;
    return i;
}

int main(){
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec_int.push_back(temp);
    }
    int con = 1;
    int i = 0;

    while (i < n){
        i = print_out(i, con);
        con++;
    }

    for (auto j : vec_int){
        cout << j << " ";
    }


    return 0;
}