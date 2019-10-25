#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, temp, set_size = 0;
    cin >> n;
    set<int> set_int;
    for (int i = 0; i < n; i++) {
        cin >> temp;

        set_int.insert(temp);
        if (set_int.size() == set_size){
            cout << "YES";
            return 0;
        }
        set_size = set_int.size();
    }
    cout << "NO";
    return 0;
}