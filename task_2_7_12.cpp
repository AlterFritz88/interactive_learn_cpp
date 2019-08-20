#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, two_three=0, five=0;
    for (int i = 0; i < 10; i++){
        cin >> temp;
        if (temp == 5) five++;
        if (temp == 3 or temp == 2) two_three++;
    }
    if (two_three > five) cout << two_three - five;
    else cout << "udarnik";
    return 0;
}

