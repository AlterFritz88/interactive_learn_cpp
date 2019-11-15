#include <bits/stdc++.h>
using namespace std;

int main() {
    long long i, x, a=2;
    cin >> x;
    vector<int> vec;
    int c = 0;
//    while (x > 1){
//        while (x % a == 0){
//            x /= a;
//            vec.push_back(a);
//        }
//        a++;
//    }
//    for (auto i : vec){
//        cout << i << " ";
//        c += i;
//    }
    if (x == 6 or x == 28 or x == 496 or x == 8128 or x == 33550336 or x == 8589869056 or x == 137438691328 or x == 2305843008139952128){
        cout << "YES";
    } else cout << "NO";
    return 0;
}
