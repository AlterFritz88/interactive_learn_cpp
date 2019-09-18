#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, temp, delimeter;
    cin >> n >> delimeter;
    vector<int> for_sort;
    vector<int> un_sort;
    for (int i = 1; i <= n; i++){
        cin >> temp;
        if (i <= delimeter) for_sort.push_back(temp);
        else un_sort.push_back(temp);
    }
    sort(for_sort.begin(), for_sort.end());
    for (auto i : for_sort){
        cout << i << " ";
    }
    for (auto i : un_sort){
        cout << i << " ";
    }
    return 0;
}