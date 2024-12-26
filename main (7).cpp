/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    vector<int> nums1 = {1, 2, 5, 2, 3};
    int target1 = 2;
    vector<int> result1 = targetIndices(nums1, target1);
    for (int i : result1) cout << i << " ";
    cout << endl;

    vector<int> nums2 = {1, 2, 5, 2, 3};
    int target2 = 3;
    vector<int> result2 = targetIndices(nums2, target2);
    for (int i : result2) cout << i << " ";
    cout << endl;

    vector<int> nums3 = {1, 2, 5, 2, 3};
    int target3 = 5;
    vector<int> result3 = targetIndices(nums3, target3);
    for (int i : result3) cout << i << " ";
    cout << endl;

    return 0;
}
