#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, n, m;
    cin >> n >> m;
    set<int> set_int;
    for (int i = 1; i <= n; i++){
        set_int.insert(i);
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < 2; j++){
            cin >> temp;
            set_int.erase(temp);
        }
    }
    cout << set_int.size() << endl;
    for (auto i : set_int){
        cout << i << " ";
    }
    return 0;
}