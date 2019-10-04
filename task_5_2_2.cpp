#include <iostream>
using namespace std;
int main(){
    int a, b, n = 0;
    cin >> a >> b;
    while (a < b){
        a += 5;
        b -= 3;
        n++;
        cout << n << ": " << a << b << endl;
    }
    return 0;
}
