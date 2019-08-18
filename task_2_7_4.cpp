#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, fours = 0, fives = 0;
    for (int i = 0; i < 20; i++){
        cin >> temp;
        if (temp == 4) fours++;
        else fives++;
    }
    cout << "4: " << fours << endl;
    cout << "5: " << fives;
    return 0;
}