#include <bits/stdc++.h>
using namespace std;

/*Method 1 Using hashmaps
time O(n)
space O(n)*/
int majorityElement1(vector<int>& nums) {
    
    int n = nums.size();
    int limit = n/2;
    
    //creating table
    unordered_map<int, int> freq;
    for(int num: nums){
        freq[num]++;
        if (freq[num] > limit){
            return num; //returing element with limit
        }
    }

    return -1;

    }
/*method 2 Moore's voting algorithm*/
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
    int limit = n/2;
    int candidate = nums[0];
    int count = 0;

    for(int num: nums){
        if (count == 0){
            candidate = num;
        }
        count += (candidate == num)? 1 : -1;
    }
    return candidate;
    }

int main(){
    vector<int> input = {3, 2, 3};
    int result = majorityElement1(input);
    cout<<result;
    return 1;
}