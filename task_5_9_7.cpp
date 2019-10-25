#include <bits/stdc++.h>
using namespace std;

int count(int x){
    if (x == 0)
        return 1;
    int s = 0;
    x = abs(x);
    while (x > 0){
        s += 1;
        x /= 10;
    }
    return s;
}


int main(){
    int n, temp; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        cout << count(temp) << " ";
    }
    return 0;
}