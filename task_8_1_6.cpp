#include <bits/stdc++.h>
using namespace std;

int enemies, days, temp;

bool is_win(int enemy){
    if (enemy == 0) return true;
    if (enemy == 1) return false;
    while(enemy > 0){
        if (enemy % 10 == 0)
            return true;
        enemy /= 10;
    }
    return false;
}

int main(){
    cin >> enemies >> days;
    int streak = 0, temp_streak = 0;
    for (int i = 0; i < days; i++){
        cin >> temp;
        //cout << is_win(temp) << endl;
        if (is_win(temp)){

            temp_streak++;
            if (temp_streak > streak) streak = temp_streak;
        } else temp_streak = 0;

    }
    if (temp_streak > streak) streak = temp_streak;
    cout << streak;
    return 0;
}