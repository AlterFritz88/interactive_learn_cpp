#include <bits/stdc++.h>
using namespace std;
int main(){
    int three = 0, four = 0, temp, n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> temp;
        if (temp == 3) three++;
        else if (temp == 4) four++;
    }
    int count = 0;
    //cout << four << " " << three << endl;
    while ((three ) >= (four + 1)){
        four++;
        three--;
        count++;
        //cout << four << " " << three << endl;
    }
    cout << count;
    return 0;
}