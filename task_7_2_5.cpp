#include <bits/stdc++.h>
using namespace std;
int main(){
    int temp, n, m;
    cin >> n >> m;
    map<int, int> map_roads;
    set<set<int>> test_vec;

    for (int i = 0; i < m; i++){
        set<int> set_int;
        for (int j = 0; j < 2; j++){
            cin >> temp;
            set_int.insert(temp);

        }
        test_vec.insert(set_int);
    }

    for (auto i : test_vec){

        for(auto j : i){
            //cout << j << " ";
            map_roads[j] += 1;
        }
        //cout << endl;
    }

    int max = 0;
    for (auto i : map_roads){
        if (i.second > max) max = i.second;
    }

    int c = 0;
    set<int> answer;
    for (auto i : map_roads){
        if (i.second == max){
            c++;
            answer.insert(i.first);
        }
    }
    cout << c << " " << max << endl;
    for (auto i : answer){
        cout << i << " ";
    }

    return 0;
}