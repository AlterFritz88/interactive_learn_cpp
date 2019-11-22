#include <bits/stdc++.h>
using namespace std;
int n;

void out(string st){
    int number = 0;
    for (auto i : st){
        if (i == '1') number++;
    }
    if (number == n) cout << st << endl;
}


void f(string s){
    if (s.size() == 8) {
        out(s);
    }
    else {
        f(s + '0');
        f(s + '1');
    }
}

int main(){
    cin >> n;
    f("");
    return 0;
}

