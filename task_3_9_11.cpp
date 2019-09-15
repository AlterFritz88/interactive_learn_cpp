#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    for (auto i : s){
        switch (i){
            case '0': cout << "0000"; break;
            case '1': cout << "0001"; break;
            case '2': cout << "0010"; break;
            case '3': cout << "0011"; break;
            case '4': cout << "0100"; break;
            case '5': cout << "0101"; break;
            case '6': cout << "0110"; break;
            case '7': cout << "0111"; break;
            case '8': cout << "1000"; break;
            case '9': cout << "1001"; break;
            case 'A': cout << "1010"; break;
            case 'B': cout << "1011"; break;
            case 'C': cout << "1100"; break;
            case 'D': cout << "1101"; break;
            case 'E': cout << "1110"; break;
            case 'F': cout << "1111"; break;
        }

    }
    return 0;
}