#include <bits/stdc++.h>
using namespace std;
int n;
int c = 0;

void f(string s){
    if (s.size() == n) {
        cout << s << "\n";
        c++;
    }
    else {
        f(s + '0');
        f(s + '1');
    }
}

int main(){
    cin >> n;
    f("");
    cout << c;
    return 0;
}
