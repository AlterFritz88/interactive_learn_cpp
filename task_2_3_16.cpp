#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, team_34 = 0, team_76 = 0;
    for (int i = 0; i < 10; i++){
        cin >> temp;
        if (temp == 34) team_34++;
        if (temp == 76) team_76++;
    }
    cout << team_76 << " " << team_34;
    return 0;
}