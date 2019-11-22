#include <bits/stdc++.h>
using namespace std;

vector<string> vec_str;
string temp;

void display(vector<string> a, int n)
{
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << endl;
//    for (int i = 0; i < n; i++) {
//        cout << a[i] << " ";
//    }

}


void findPermutations(vector<string> a, int n)
{

    // Sort the given array
    //sort(a, a + n);

    // Find all possible permutations

    do {
        display(a, n);
    } while (next_permutation(a.begin(), a.end()));
}

int main(){
    for (int i = 0; i < 4; i++){
        cin >> temp;
        vec_str.push_back(temp);
    }
    findPermutations(vec_str, 4);
    return 0;
}