/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int findPosition(int k, vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == k) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int k = 16;
    vector<int> arr = {9, 7, 16, 16, 4};
    cout << findPosition(k, arr) << endl;

    k = 98;
    arr = {1, 22, 57, 47, 34, 18, 66};
    cout << findPosition(k, arr) << endl;

    return 0;
}
