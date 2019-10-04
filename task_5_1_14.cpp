#include <iostream>
using namespace std;
int main(){
    int sum = 0, temp;
    while (cin >> temp){
        if (temp == 0) break;
        if ((temp%10) == 4 and (temp % 6 == 0)) {

            sum += temp;

        }
    }
    cout << sum;
    return 0;
}