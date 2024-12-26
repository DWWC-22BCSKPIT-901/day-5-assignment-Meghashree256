/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

bool isPresent(int k, vector<int>& arr) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == k) {
            return true;
        } else if (arr[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 6};
    cout << isPresent(6, arr1) << endl;

    vector<int> arr2 = {1, 2, 4, 5, 6};
    cout << isPresent(3, arr2) << endl;

    vector<int> arr3 = {1, 2, 4, 5, 6};
    cout << isPresent(6, arr3) << endl;

    return 0;
}
