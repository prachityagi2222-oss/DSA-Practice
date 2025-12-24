#include <bits/stdc++.h>
using namespace std;

/*Method 1 Brue force
    1. repeat k times
    2. rotate one element at a time
    time O(n2)
    space O(1) */
    void rotate1(vector<int>& nums, int k) {
        size_t n = nums.size();
        for (int i = 1; i <= k; i++){
            //rotate to right
            int prev = nums[0];
            int last = nums[n-1];
            for(int j = 1; j < n; j++){
                int current = nums[j];
                nums[j] = prev;
                prev = current;
            }
            //assigning last element
            nums[0] = last;
        }
    }
/*Method 2 Brue force
1. repeat k times
2. rotate one element at a time
time O(n)
space O(n) */
void rotate2(vector<int>& nums, int k) {
    size_t n = nums.size();
    k = k%n;
    vector<int> res;
    //inserting first half
    for(auto i = k+1; i < n; i++){
        res.emplace_back(nums[i]);
    }
    //inserting second hafl
    for (auto i = 0; i <= k; i++){
        res.emplace_back(nums[i]);
    }
    nums = res;
}
class Solution {
public:
    /*Method 2 Optimal
    time O(n)
    space O(1) */
    void rotate3(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n; //handle k if k>n
        reverse(nums.begin(), nums.begin() + n-k);
        reverse(nums.begin() + n-k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

int main(){

}