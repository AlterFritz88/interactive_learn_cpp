#include <bits/stdc++.h>
using namespace std;

int enemies, days;
string temp;

bool is_win(string enemy){

   for (auto i : enemy) {
       if (i == '0') return true;
   }
    return false;
}

int main(){
    cin >> enemies >> days;
    int streak = 0, temp_streak = 0;
    for (int i = 0; i < days; i++){
        cin >> temp;

        if (is_win(temp)){

            temp_streak++;

            if (temp_streak > streak) streak = temp_streak;
        } else temp_streak = 0;

    }
    if (temp_streak > streak) streak = temp_streak;
    cout << streak;
    return 0;
}