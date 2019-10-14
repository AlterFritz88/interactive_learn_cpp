#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, sum = 0;
    vector<int> vec_int;
    for (int i = 0; i < 3; i++){
        cin >> temp;
        sum += temp;
    }
    switch (sum % 3){
        case (1) : cout << "first"; return 0;
        case (2) : cout << "second"; return 0;
        case (0) : cout << "third"; return 0;
    }



    return 0;
}