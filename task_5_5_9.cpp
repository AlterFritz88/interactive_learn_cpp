#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, all_diff = 0, one_pair = 0, two_pairs = 0, three_eq = 0, all_eq = 0;
    cin >> n;

    int border = n / 4;
    for (int i = 0; i < border; i++){
        map<int, int> m;
        for (int j = 0; j < 4; j++){
            cin >> temp;
            m[temp]++;
        }
        if (m.size() == 1) {
            all_eq++;
            continue;
        }
        if (m.size() == 2){
            for (auto item : m){
                if (item.second == 3 or item.second == 1){
                    three_eq++;
                    break;
                } else {
                    two_pairs++;
                    break;
                }
            }
            continue;
        }
        if (m.size() == 3){
            one_pair++;
            continue;
        }
        all_diff++;
    }

    cout << "AllDiff: " << all_diff << endl;
    cout << "OnePair: " << one_pair << endl;
    cout << "TwoPairs: " << two_pairs << endl;
    cout << "ThreeEq: " << three_eq << endl;
    cout << "AllEq: " << all_eq << endl;
//    for(auto i : m){
//        cout << i.first << " " << i.second << endl;
//    }
    return 0;
}