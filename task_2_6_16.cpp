#include <bits/stdc++.h>
using namespace std;
int main(){
    int fl_1 = 1;
    int fl_2 = 0;
    int fl_3 = 0;
    int fl_4 = 0;
    int temp, now = 1;
    for (int i = 0; i < 20; i++){
        cin >> temp;
        now += temp;
        switch (now){
            case 1: fl_1++;
                break;
            case 2: fl_2++;
                break;
            case 3: fl_3++;
                break;
            case 4: fl_4++;
                break;
            default :break;
        }

    }
    cout << "FLOOR 1: " << fl_1 << endl;
    cout << "FLOOR 2: " << fl_2 << endl;
    cout << "FLOOR 3: " << fl_3 << endl;
    cout << "FLOOR 4: " << fl_4 << endl;

    return 0;
}