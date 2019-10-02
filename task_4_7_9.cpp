#include <bits/stdc++.h>
using namespace std;
struct puple{
    string name;
    vector<int> marks;
    int sum;
    int five;
};

bool cmp(const puple& x, const puple& y){
    if (x.sum > y.sum) return true;
    else if (x.sum == y.sum and x.five < y.five) return true;
    else if (x.sum == y.sum and x.five == y.five and x.name < y.name) return true;
    return false;
}

int main(){
    int n, temp_int;
    cin >> n;
    string temp_str;

    vector<puple> puples;
    for (int i = 0; i < n; i++){

        vector<int> mark_vec;
        cin >> temp_str;
        int sum = 0;
        int five = 0;
        puples.push_back(puple());
        for (int j = 0; j < 10; j++){
            cin >> temp_int;
            mark_vec.push_back(temp_int);
            sum += temp_int;
            if (temp_int == 5) five++;
        }
        sort(mark_vec.begin(), mark_vec.end());
        reverse(mark_vec.begin(), mark_vec.end());
        puples[i].name = temp_str;
        puples[i].marks = mark_vec;
        puples[i].sum = sum;
        puples[i].five = five;
    }

    sort(puples.begin(), puples.end(), cmp);
    for (auto i : puples){
        cout << i.name << " ";
        for (int j = 0; j < 10; j++){
            cout << i.marks[j] << " ";
        }
        cout << endl;
    }
    return 0;
}