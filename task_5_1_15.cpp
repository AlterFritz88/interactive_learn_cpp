#include <iostream>
using namespace std;
int main(){
    int sum = 0, temp;
    while (cin >> temp){
        if (temp == 0) break;
        string st_i = to_string(temp);

        if ((st_i.size() == 2) and (temp % 2 == 0)) {

            sum++;
        }
    }
    cout << sum;
    return 0;
}
