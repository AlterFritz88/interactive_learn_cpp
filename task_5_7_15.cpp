#include <bits/stdc++.h>
using namespace std;
int main(){
    char temp;
    cin >> temp;
    vector<int> vec_int;
    while (temp != '.'){
        if (temp >= '0' and temp <= '9'){
            vec_int.push_back((int)temp - 48);
        }
        cin >> temp;
    }
    if (vec_int.size() == 0){
        cout << "NO";
        return 0;
    }
    cout << "YES" << endl;
    sort(vec_int.begin(), vec_int.end());
    long long ans = 0;
    for (int i = 0; i < vec_int.size(); i++){
        ans += vec_int[i] * pow(10, i);
    }
    cout << ans;

    return 0;
}