#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, file, temp; cin >> n >> file;
    vector<int> sizes;
    for (int i = 0; i < n; i++){
        cin >> temp;
        sizes.push_back(temp);
    }
    sort(sizes.begin(), sizes.end());
    reverse(sizes.begin(), sizes.end());
    int c = 0, sum = 0;
    for (auto i : sizes){
        sum += i;
        c++;
        if (sum >= file){
            cout << c;
            return 0;
        }
    }


    return 0;
}