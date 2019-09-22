#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, n_requests;
    string temp_string;
    cin >> n >> n_requests;
    set<string> surname;
    for (int i = 0; i < n; i++){
        cin >> temp_string;
        surname.insert(temp_string);
    }

    for (int i = 0; i < n_requests; i++){
        cin >> temp_string;
        if (surname.find(temp_string) != surname.end()){
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
    return 0;
}