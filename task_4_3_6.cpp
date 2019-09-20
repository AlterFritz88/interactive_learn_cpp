#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, s_34 = 0, s_76 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if (temp == 76) s_76++;
        else s_34++;
    }
    cout << s_76 << " " << s_34;
    return 0;
}