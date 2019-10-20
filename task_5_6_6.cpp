#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, sum_a = 0, sum_b = 0;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    char turn = 'a';
    while(vec.size() > 0){
        if (vec[0] > vec[vec.size() - 1]){
            if (turn == 'a'){
                sum_a += vec[0];
                turn = 'b';
                vec.erase(vec.begin());
                continue;
            } else {
                sum_b += vec[0];
                turn = 'a';
                vec.erase(vec.begin());
                continue;
            }
        } else {
            if (turn == 'a'){
                sum_a += vec[vec.size() - 1];
                turn = 'b';
                vec.erase(vec.end() - 1);
                continue;
            } else {
                sum_b += vec[vec.size() - 1];
                turn = 'a';
                vec.erase(vec.end() - 1);
                continue;
            }
        }
    }
    cout << sum_a << " " << sum_b;
    return 0;
}