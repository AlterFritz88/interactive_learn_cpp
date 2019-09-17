#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, count = 0, max = 0;
    vector<int> vec;
    cin >> n;
    if (n == 1){
        cin >> temp;
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }

    for (int i = 0; i < n-1; i++){
        if (vec[i+1] > vec[i] and count == 0){
            count = 2;
            continue;
        }
        if (vec[i+1] > vec[i]) {
            count++;
        }
        else {
            //cout << "count" << count << endl;
            if (count > max) max = count;
            count = 0;
        }
    }
    if (count > max) max = count;
    cout << max;
    return 0;
}