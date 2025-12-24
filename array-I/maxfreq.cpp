/*using unordered hashmap
time complexity O(n)
space complexity O(n)
*/
#include <bits/stdc++.h>
using namespace std;

int maxFrequencyElements(vector<int>& nums) {
    //creating hash 
    map<int, int> mpp;
    int count = 0;
    int max = 0;

    //storing frequencies in hash table
    for(int i = 0; i < nums.size(); i++){
        mpp[nums[i]]++;
        //calculating max freq
        if (max < mpp[nums[i]]){
            max = mpp[nums[i]];
        }
    }

    //counting elements with max frequenct
    for(auto [key, value] : mpp){
        if (value == max){
            count += value;
        }
    }
    return count;
}
