#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    set<char> third = {'H', 'E'};
    set<char> second = {'D', 'E', 'C'};
    set<char> first = {'D', 'H', 'B'};
    set<char> last = {'D', 'E', 'C'};

    if (third.count(str[2])){
        if (second.count(str[2])) second.erase(str[2]);
        if (second.count(str[1])){
            if (first.count(str[1])) first.erase(str[1]);
            if (first.count(str[0])){
                if (last.count(str[0])) last.erase(str[0]);
                if (last.count(str[3])){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}