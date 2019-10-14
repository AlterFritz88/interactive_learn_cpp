#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, sum = 0;
    vector<int> vec_int;
    for (int i = 0; i < 3; i++){
        cin >> temp;
        sum += temp;
        vec_int.push_back(temp);
    }
    auto max = *max_element(vec_int.begin(), vec_int.end());

    if (vec_int[0] == max){
        switch (sum % 3) {
            case (1) :
                cout << "first";
                return 0;
            case (2) :
                cout << "second";
                return 0;
            case (0) :
                cout << "third";
                return 0;
        }
    }
    else if (vec_int[1] == max){
        switch (sum % 3) {
            case (0) :
                cout << "first";
                return 0;
            case (1) :
                cout << "second";
                return 0;
            case (2) :
                cout << "third";
                return 0;
    }
    }
    else {
        switch (sum % 3) {
            case (2) :
                cout << "first";
                return 0;
            case (0) :
                cout << "second";
                return 0;
            case (1) :
                cout << "third";
                return 0;
        }
    }



    return 0;
}