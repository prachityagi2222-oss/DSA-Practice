#include <bits/stdc++.h>
using namespace std;

/*method
1. initialize sum = 0
2. increment sum by adding the current element to it
3. store sum 
time complexity O(N)
space complexity O(N)*/
vector<int> runningSum(vector<int>& nums) {
    vector<int> res;
    int sum = 0;
    for (int i = 0;i < nums.size(); i++){
        sum += nums[i];
        res.push_back(sum);
    }
    return res;
}
