#include <bits/stdc++.h>
using namespace std;
int n;
int c = 0;

void f(string s){
    if (s.size() == n) {
        cout << s << "\n";

    }
    else {
        f(s + '-');
        f(s + '+');
    }
}

int main(){
    cin >> n;
    f("");

    return 0;
}
