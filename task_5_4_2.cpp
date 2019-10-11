#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp;
    vector<int> vec_int;
    for (int i = 0; i < 3; i++){
        cin >> temp;
        vec_int.push_back(temp);
    }

    if (vec_int[0] == 1 and vec_int[1] == 2 and vec_int[2] == 2){
        cout << "second";
        return 0;
    }
    int sum = 0;
    while (sum <= 5){
        for (int i = 0; i < 3; i++){
            sum += vec_int[i];
            //cout << sum << endl;
            if (sum >= 5){
                switch (i){
                    case 0: cout << "first"; return 0;
                    case 1: cout << "second"; return 0;
                    case 2: cout << "third"; return 0;

                 }
            }
        }

    }

    return 0;
}