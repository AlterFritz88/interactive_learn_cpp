#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, max = 1, curent = 1;
    cin >> n;
    if (n == 0){
        cout << 0;
        return 0;
    }
    bool init = false;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    map<int, int> map_ints;

    for (int i = 0; i < n-1; i++){
        if (vec[i] == vec[i+1] and !init){
            curent++;
            init = true;
            continue;
        }
        if (vec[i] == vec[i+1] and init){
            curent++;
            continue;
        }
        if (vec[i] != vec[i+1]){
            if (curent > max) max = curent;
            curent = 1;
            init = false;
        }

    }
    if (curent > max) max = curent;

    cout << max;
    return 0;
}