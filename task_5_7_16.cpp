#include <bits/stdc++.h>
using namespace std;
int main(){
    string s = "";
    map<char, int> m;
    char temp;
    cin >> temp;
    while (temp != '.'){
        if (temp != ' '){
            s += toupper(temp);
            m[toupper(temp)] += 1;
        }
        cin >> temp;
    }
    vector<int> odd;
    if (s.size() % 2 == 0){
        for (auto i : m){
            if (i.second % 2 != 0){
                cout << "NO";
                return 0;
            }
        }
    } else {
        int cout_odd = 0;
        for (auto i : m){
            if (i.second % 2 != 0){
                cout_odd++;
            }
        }

        if (cout_odd > 1){
            cout << "NO";
            return 0;
        }
    }

    vector<char> vec;
    char delimeter;
    if (s.size() % 2 == 0){
        for (auto i : m){
            for (int j = 0; j < i.second / 2; j++){
                vec.push_back(i.first);
            }
        }
    } else {
        for (auto i : m){
            if (i.second % 2 == 0) {
                for (int j = 0; j < i.second / 2; j++) {
                    vec.push_back(i.first);
                }
            } else {
                for (int j = 0; j < i.second / 2; j++) {
                    vec.push_back(i.first);
                }
                delimeter = i.first;
            }
        }
    }
    cout << "YES" << endl;
    sort(vec.begin(), vec.end());
    reverse(vec.begin(), vec.end());
    for (auto i: vec){
        cout << i;
    }
    if (s.size() % 2 != 0){
        cout << delimeter;
    }
    for (int i = vec.size() - 1; i >= 0; i--){
        cout << vec[i];
    }

    //cout << s;

    return 0;
}
