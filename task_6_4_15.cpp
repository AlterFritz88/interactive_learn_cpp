#include <bits/stdc++.h>
using namespace std;

vector<int> combination;
vector<int> stuff;

void pretty_print(const vector<int>& v) {
    static int count = 0;
    cout << "combination no " << (++count) << ": [ ";
    for (int i = 0; i < v.size(); ++i) { cout << v[i] << " "; }
    cout << "] " << endl;
}

void go(int offset, int k) {
    if (k == 0) {
        pretty_print(combination);
        return;
    }
    for (int i = offset; i <= stuff.size() - k; ++i) {
        combination.push_back(stuff[i]);
        go(i+1, k-1);
        combination.pop_back();
    }
}



int main(){
    int weigh, temp; cin >> weigh;

    for (int i = 0; i < 10; i++){
        cin >> temp;
        stuff.push_back(temp);
    }
    go(1, 4);

    return 0;
}