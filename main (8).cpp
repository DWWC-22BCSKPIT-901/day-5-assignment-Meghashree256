/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    vector<int> nums1 = {1, 3, 5, 6};
    cout << searchInsert(nums1, 5) << endl;

    vector<int> nums2 = {1, 3, 5, 6};
    cout << searchInsert(nums2, 2) << endl;

    vector<int> nums3 = {1, 3, 5, 6};
    cout << searchInsert(nums3, 7) << endl;

    return 0;
}
