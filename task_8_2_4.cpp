#include <bits/stdc++.h>
using namespace std;
int main(){
    int rounds; cin >> rounds;
    int mish = 0, cris = 0;
    int temp_mish, temp_cris;
    for (int i = 0; i < rounds; i++){
        cin >> temp_mish >> temp_cris;
        if (temp_mish > temp_cris) mish++;
        else if (temp_mish < temp_cris) cris++;
    }
    if (mish > cris) cout << "Mishka";
    else if (cris > mish) cout << "Chris";
    else cout << "Friendship is magic!^^";

    return 0;
}