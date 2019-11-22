#include <bits/stdc++.h>
using namespace std;

int sum (int num){
    int sum = 0;
    vector<int> vec;
    while (num >= 1){
        vec.push_back(num % 10);
        num /= 10;
    }
    int max = *max_element(vec.begin(), vec.end());
    for (auto i : vec){
        if (i == max) sum++;
    }
    return sum;
}

int main(){
    int temp;
    for (int i = 0; i < 3; i++){
        cin >> temp;
        cout << sum(temp) << " ";
    }
    return 0;
}