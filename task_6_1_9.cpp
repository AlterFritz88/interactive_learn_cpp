#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    vector<int> vec;
    for (int i = 0; i < 20; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    cout << *min_element(vec.begin(), vec.end());
    return 0;
}