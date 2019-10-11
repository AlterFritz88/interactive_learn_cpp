#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, min = 10000, count = 0;
    cin >> n;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp < min) min = temp;
        vec_int.push_back(temp);
    }

    for (auto i : vec_int){
        if (i == min) {
            count++;
        }
    }

    cout << count << endl;
    for (auto i : vec_int){
        cout << i << " ";
    }
    return 0;
}