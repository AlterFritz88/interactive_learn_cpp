#include <bits/stdc++.h>
using namespace std;
int n;
int c = 0;
vector<string> vec;
int counter = 0;
int a, b;
void check(string s){
    int res = a;
    for (int j = 0; j < s.size(); j++){

        if (s[j] == '+'){
            res += 1;
            if (res > b) break;
        } else {
            res *= 2;
            if (res > b) break;
        }
    }
    //cout << res << " " << endl;
    if (res == b){
        counter++;
    }
}

void f(string s, int size){
    if (s.size() == size) {
        //cout << s << "\n";
        //vec.push_back(s);
        check(s);

    }
    else {
        f(s + '+', size);
        f(s + '*', size);
    }
}

int main(){

    cin >> a >> b;
    for (int i = b-1; i >= a; i--){
        f("", b - a);
    }


    cout << counter;
    return 0;
}
