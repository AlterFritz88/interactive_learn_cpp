#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int min_92 = INT_MAX, min_95 = INT_MAX, min_98 = INT_MAX;
    int temp_AI, temp_price;
    int c_92 = 0, c_95 = 0, c_98 = 0;
    string temp;

    for (int i = 0; i < n; i++){
        cin >> temp;
        cin >> temp;
        cin >> temp_AI;
        cin >> temp_price;
        if (temp_AI == 92) {
            if (temp_price == min_92) c_92++;
            if (temp_price < min_92) {
                c_92 = 1;
                min_92 = temp_price;
            }
        }
        if (temp_AI == 95) {
            if (temp_price == min_95) c_95++;
            if (temp_price < min_95) {
                c_95 = 1;
                min_95 = temp_price;
            }
        }
        if (temp_AI == 98) {
            if (temp_price == min_98) c_98++;
            if (temp_price < min_98) {
                c_98 = 1;
                min_98 = temp_price;
            }
        }

    }
    cout << c_92 << " " << c_95 << " " << c_98;
    return 0;
}