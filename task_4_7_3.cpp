#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp;
    cin >> n;
    vector<int> first_part, second_part;

    for (int i = 0; i < n; i++){
        cin >> temp;
        if (i < n / 2) first_part.push_back(temp);
        else second_part.push_back(temp);
    }
    sort(first_part.begin(), first_part.end());
    sort(second_part.begin(), second_part.end());
    reverse(second_part.begin(), second_part.end());
    for (auto i : first_part){
        cout << i << " ";
    }

    for (auto i : second_part){
        cout << i << " ";
    }
    return 0;
}