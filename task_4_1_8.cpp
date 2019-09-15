#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    for (int i = 0; i < n; i +=2){
        cout << vec[i+1] << " " << vec[i] << " ";
    }
    return 0;
}