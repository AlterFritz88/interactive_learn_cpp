#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<int, int> a, b;
    cin >> a.first >> a.second >> b.first >> b.second;

    a.first *= b.second;
    b.first *= a.second;
    int old_a = a.second;
    a.second *= b.second;
    b.second *= old_a;

    pair<int, int> answ;
    answ.first = a.first + b.first;
    answ.second = b.second;


    for (int i = answ.first; i > 1; i--){
        if (answ.first % i == 0 and answ.second % i == 0){
            answ.first /= i;
            answ.second /= i;
            break;
        }
    }
    cout << answ.first << " " << answ.second;

    return 0;
}