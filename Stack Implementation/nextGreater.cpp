#include <bits/stdc++.h>
using namespace std;

/*using brute force, iterating thorough each element
time complexity: O(n2)
space complexity O(n)*/
class Solution {
public:
 
vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i = 0; i < nums1.size(); i++){
            int num = nums1[i];
            int currIdx = indexOf(num, nums2);
            int index = -1;
            for (int j = currIdx+1; j < nums2.size(); j++){
                if(nums2[j] > num){
                    index = j;
                    break;
                }
            }
            if (index == -1) 
                res.emplace_back(-1);
            else
                res.emplace_back(nums2[index]);
        }
        return res;
    }
    int indexOf(int n, vector<int> v){
        for (int i = 0; i < v.size(); i++){
            if (v[i] == n){
                return i;
            }
        }
        return -1;
    }
};