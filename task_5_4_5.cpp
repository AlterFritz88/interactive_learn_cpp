#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i += 3){

        vector<int> temp_arr;
        for (int j = 0; j < 3; j++){
            cin >> temp;
            temp_arr.push_back(temp);
        }
        cout << *max_element(temp_arr.begin(), temp_arr.end()) << " ";
    }
    return 0;
}