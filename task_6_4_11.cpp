#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, int c, int d, int e, int n){
    int count = 0;
    if (a == 1) count++;
    if (b == 2) count++;
    if (c == 3) count++;
    if (d == 4) count++;
    if (e == 5) count++;
    if (count == n) return true;
    else return false;
}
int main(){
    int n = 0; cin >> n;
    for (int a = 1; a <= 5; a++){
        for (int b = 1; b <= 5; b++){
            if (b != a){
                for (int c = 1; c <= 5; c++){
                    if(c != a && c != b){
                        for (int d = 1; d <= 5; d++){
                            if (d != a && d != b && d != c){
                                for (int e = 1; e <= 5; e++){
                                    if (e != a && e != b && e != c && e != d){
                                        if (check(a, b, c, d, e, n)) cout << a << b << c << d << e << endl;

                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}