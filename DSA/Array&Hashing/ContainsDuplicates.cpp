/*
 * Author: Mike1312
 * Contains Duplicate
 * Time:  O(n²)
 * Space: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] == nums[j])
                    return true;
            }
        }
        return false;
    }
};

int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 3, 1};
    cout << sol.hasDuplicate(nums1) << endl; // 1 (true)

    vector<int> nums2 = {1, 2, 3, 4};
    cout << sol.hasDuplicate(nums2) << endl; // 0 (false)

    return 0;
}