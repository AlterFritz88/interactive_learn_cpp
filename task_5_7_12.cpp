#include <bits/stdc++.h>
using namespace std;

int summa(int number){

    return (number / 10 % 10) + number % 10;
}

int main(){
    int n, temp, sum; cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++){
        cin >> temp;
        sum = summa(temp);
        cout << sum << " ";
        m[sum]++;
    }
    cout << endl;
    set<int> sets;
    int max = 0;
    for (auto i : m){
        if (i.second == max){
            sets.insert(i.first);
        }
        if (i.second > max){
            max = i.second;
            sets = {i.first};
        }
    }
    cout << *sets.begin();
    return 0;
}