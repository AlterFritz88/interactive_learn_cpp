#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string temp;
    vector<string> vec(n);
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end(), [](const string & a, const string & b) {return a.size() > b.size(); });
    int max_size = vec[0].size();
    int count_max = 0;
    for (auto i : vec){
        if (i.size() == max_size) count_max++;
    }
    cout << count_max << endl;
    for (auto i : vec){
        if (i.size() == max_size) cout << i << endl;
    }
    return 0;
}