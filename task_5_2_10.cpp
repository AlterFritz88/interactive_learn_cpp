#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    bool perenos = true;
    vector<char> answer;

    if (str[str.size() - 1] != '0'){
        for (int i = 0; i < str.size() - 1; i++){
            cout << str[i];
        }
        cout << char(str[str.size() - 1] - 1);
    }
    else {

        for (int i = str.size() - 1; i >= 0; i--) {
            if (i == 0 and perenos and str[i] == '1'){
                //answer.push_back('9');
                continue;
            }

            if (str[i] == '0' and perenos) {
                answer.push_back('9');
                continue;
            }
            if (str[i] != '0' and perenos){
                perenos = false;
                answer.push_back(char(str[i] - 1));
                continue;
            }

            answer.push_back(str[i]);

        }
        reverse(answer.begin(), answer.end());
        for(auto i : answer){
            cout << i;
        }
    }
    return 0;
}