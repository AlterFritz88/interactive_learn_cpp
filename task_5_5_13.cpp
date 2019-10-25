#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, w;
    cin >> k >> w;
    int a1, b1, a2, b2, a3, b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    vector<pair<int, int>> vec;
    vec.push_back(make_pair(a1, b1));
    vec.push_back(make_pair(a2, b2));
    vec.push_back(make_pair(a3, b3));

    int temp_people = 0, temp_weigh = 0;
    for (int i = 0; i < 3; i++){
        temp_weigh += vec[i].first;
        temp_people += vec[i].second;
//        cout << temp_people << " " << temp_weigh << endl;
        if (temp_people >= k and temp_weigh <= w){
            cout << "YES";
            return 0;
        }
    }
    temp_people = 0, temp_weigh = 0;
    for (int i = 1; i < 3; i++){
        temp_weigh += vec[i].first;
        temp_people += vec[i].second;
//        cout << temp_people << " " << temp_weigh << endl;
        if (temp_people >= k and temp_weigh <= w){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}