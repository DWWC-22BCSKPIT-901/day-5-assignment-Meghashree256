/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    unordered_map<int, int> rank;
    for (int i = 0; i < arr2.size(); i++) {
        rank[arr2[i]] = i;
    }
    sort(arr1.begin(), arr1.end(), [&](int a, int b) {
        if (rank.count(a) && rank.count(b)) {
            return rank[a] < rank[b];
        } else if (rank.count(a)) {
            return true;
        } else if (rank.count(b)) {
            return false;
        } else {
            return a < b;
        }
    });
    return arr1;
}

int main() {
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};
    vector<int> result = relativeSortArray(arr1, arr2);
    for (int x : result) cout << x << " ";
    cout << endl;
    return 0;
}
