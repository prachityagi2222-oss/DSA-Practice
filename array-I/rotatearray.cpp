#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    /*Method 1 creating a new array
    time complexity O(N)
    space complexity O(N)*/
    void rotate(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        k = k % n;//handle k > n
        //adding elements from end
        for (int i = n-k; i < n; i++){
            res.emplace_back(nums[i]);
        }
        //adding the rest of the elements
        for (int i = 0; i < n-k; i++){
            res.emplace_back(nums[i]);
        }
        nums = res;
    }
    
    
};