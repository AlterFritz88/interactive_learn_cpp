#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp; cin >> n;
    vector<int> s1;
    for (int i = 0; i < n; i++){
        cin >> temp;
        s1.push_back(temp);
    }
    sort(s1.begin(), s1.end());
    int c = 0;
    for (int i = s1[0]; i <= s1[s1.size()-1]; i++){
        c++;
    }

    cout << c - s1.size();
    return 0;
}