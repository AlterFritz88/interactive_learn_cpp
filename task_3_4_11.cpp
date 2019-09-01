#include <bits/stdc++.h>
using namespace std;
int main(){
    string a, a1, a2 = "";
    cin >> a;
    int size =  a.size();
    if ((size % 2) == 0){
        a1 = a.substr(0, a.size()/2);
        for (int i = (a.size() / 2); i < a.size(); i++){
            a2 = a[i] + a2;
        }
        if (a1 == a2) cout << "YES";
        else cout << "NO";
    }
    else {
        a1 = a.substr(0, (a.size()/2) + 1);
        for (int i = (a.size() / 2); i < a.size(); i++){
            a2 = a[i] + a2;
        }
        cout << a1 << endl << a2 << endl;
        if (a1 == a2) cout << "YES";
        else cout << "NO";
    }

    return 0;
}