#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*Find min/max positions in O(N), calculate 3 cases
time complexity O(N)
space complexity O(1)*/
int minimumDeletions(vector<int>& nums) {
    int n = nums.size();
    int minIdx = 0;
    int maxIdx = 0;
    //loop to find the maximum and minimum indices
    for (int i = 0; i<n;i++){
        if (nums[i]<nums[minIdx]){
            minIdx = i;
        }
        if (nums[i]>nums[maxIdx]){
            maxIdx = i;
        }
    }
    //loop to find the removals need to be done
    //case 1 : if removed from front
    int a = max(minIdx, maxIdx) + 1;
    //case 2: if removed from back
    int b = n - min(minIdx, maxIdx);
    //case 3 if removed from front and back
    int c = min(minIdx, maxIdx) + 1 + (n - max(minIdx, maxIdx));
    return min({a, b, c});
}
