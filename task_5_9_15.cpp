#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    int pos, num;
    bool inserted = false;
    cin >> pos >> num;
    for (int i = 0; i < n; i++){
        if (i + 1 == pos) {
            cout << num << " " << vec[i] << " ";
            inserted = true;

        } else cout << vec[i] << " ";
    }
    if (!inserted) cout << num;
    return 0;
}