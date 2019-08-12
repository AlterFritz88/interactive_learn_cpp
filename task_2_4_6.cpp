#include <bits/stdc++.h>
using namespace std;
int main(){
    long long tel;
    cin >> tel;
    switch (tel % 100){
        case 33: {
            printf("Dasha");
            break;
        }
        case 42:{
            printf("Nastya");
            break;
        }
        case 57:{
            printf("Diana");
            break;
        }
        default:
            break;
    }
    return 0;
}