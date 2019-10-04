#include <iostream>
using namespace std;
int main(){
    int max = 0, temp;
    while (cin >> temp){
        if (temp == 0) break;

        if (temp > max) max = temp;


    }
    cout << max;
    return 0;
}
