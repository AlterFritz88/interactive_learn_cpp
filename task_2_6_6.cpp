#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a, b, c;
    cin >> n;
    a = n / 100;
    b = n / 10 % 10;
    c = n % 10;
    vector<int> numbers;
    numbers.push_back(a*100 + b*10 + c);
    numbers.push_back(a*100 + c*10 + b);
    numbers.push_back(b*100 + a*10 + c);
    numbers.push_back(b*100 + c*10 + a);
    numbers.push_back(c*100 + a*10 + b);
    numbers.push_back(c*100 + b*10 + a);
    auto mini = min_element(numbers.begin(), numbers.end());
    auto maxx = max_element(numbers.begin(), numbers.end());
    cout << *maxx << " " << *mini;
    return 0;
}