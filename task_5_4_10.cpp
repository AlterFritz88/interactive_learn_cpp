#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, count = 0;
    bool start = false;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    for (int i = 0; i < n-1; i++){
        if (vec[i] == 0 and vec[i+1] == 1){
            start = true;
        }
        if (vec[i] == 1 and vec[i+1] == 0 and start){
            start = false;
            count++;
        }
    }

    cout << count;
    return 0;

}