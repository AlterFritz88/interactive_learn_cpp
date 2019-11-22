#include <iostream>
#include <vector>

using namespace std;

vector<int> people;
vector<int> combination;
vector<string> vec;

void pretty_print(const vector<int>& v) {


    cout << vec[v[0] - 1] << " " << vec[v[1] - 1] << " " << vec[v[2] - 1];
    cout <<  endl;
}

void go(int offset, int k) {
    if (k == 0) {
        pretty_print(combination);
        return;
    }
    for (int i = offset; i <= people.size() - k; ++i) {
        combination.push_back(people[i]);
        go(i+1, k-1);
        combination.pop_back();
    }
}

int main() {
    int n = 5, k = 3;

    for (int i = 0; i < n; ++i) { people.push_back(i+1); }
    string temp;
    for (int i = 0; i < 5; i++){
        cin >> temp;
        vec.push_back(temp);
    }
    go(0, k);

    return 0;
}
