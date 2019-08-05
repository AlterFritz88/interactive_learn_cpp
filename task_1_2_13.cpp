#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 0; i < 5; i++){
        cout << n + i << setw(8) << pow((n + i), 3) << endl;
    }
    return 0;
}
