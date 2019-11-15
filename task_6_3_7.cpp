#include <bits/stdc++.h>
using namespace std;
int n;
int c = 0;
vector<string> vec;

void f(string s){
    if (s.size() == 4) {
        //cout << s << "\n";
        vec.push_back(s);

    }
    else {
        f(s + '-');
        f(s + '+');
    }
}

int main(){
    f("");
    int temp, result;
    vector<int> vec_int;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        vec_int.push_back(temp);
    }
    cin >> result;
    vector<string> answer;
    for (auto i : vec){
        int res = vec_int[0];
        string temp_str = to_string(vec_int[0]);
        for (int j = 0; j < i.size(); j++){
            temp_str += i[j];
            temp_str += to_string(vec_int[j+1]);
            if (i[j] == '+'){
                res += vec_int[j+1];
            } else {
                res -= vec_int[j+1];
            }
        }
        //cout << res << " " << result << endl;
        if (res == result){
            temp_str += "=";
            temp_str += to_string(result);
            answer.push_back(temp_str);
        }

    }
    for (auto i : answer){
        cout << i << endl;
    }
    return 0;
}
