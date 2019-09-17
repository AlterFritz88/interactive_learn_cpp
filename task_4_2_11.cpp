#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, number;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    cin >> number;
    int trig = 0;
    for (int i = 0; i < n; i++){
        if(vec[i] == number){
            cout << i+1 << " ";
            trig = 1;
        }
    }
    if (trig == 0) cout << "NO";
    return 0;
}