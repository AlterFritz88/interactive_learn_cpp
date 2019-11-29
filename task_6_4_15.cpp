#include <bits/stdc++.h>
using namespace std;

vector<int> combination;
vector<int> stuff;
int weigh;
int maximum = 0;

void pretty_print(const vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) { sum += v[i]; }
    if (sum <= weigh and sum > maximum){
        maximum = sum;
    }
    //cout << sum << endl;
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
    int temp; cin >> weigh;

    for (int i = 0; i < 10; i++){
        cin >> temp;
        if (temp <= weigh){
            stuff.push_back(temp);
        }

    }
    for (int i = 1; i <= stuff.size(); i++)
        go(0, i);
    cout << maximum;
    return 0;
}