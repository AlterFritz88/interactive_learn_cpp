#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, temp, sum = 0;
    cin >> n >> k;
    vector<int> vec_int;
    for (int i = 0; i < n; i++){
        cin >> temp;
        sum += temp;
        if (sum > k) {
            cout << temp << " ";
            break;
        }
        else cout << temp << " ";
    }



    return 0;
}