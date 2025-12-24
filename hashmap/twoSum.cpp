#include <bits/stdc++.h>
using namespace std;

/*Method1 Two pointer approach
1. sort the array
2. accroding to the current sum, adjust rear and front accourdingly
3. extract the indecies for the selected elements from the orignal array*/
vector<int> twoSum1(vector<int>& nums, int target) {
    vector<int> orignal_nums = nums;
    sort(nums.begin(), nums.end());
    int rear = nums.size() - 1;
    int front = 0;
    while(front < rear){
        int sum = orignal_nums[front] + orignal_nums[rear];
        if(sum > target){
            rear--;
        }
        else if(sum == target){
            auto it = find(nums.begin(), nums.end(), orignal_nums[front]);
            front = it - nums.begin();
            it = find(nums.begin(), nums.end(), orignal_nums[rear]);
            rear = it - nums.begin();
            return {front, rear};
        }
        else if (sum < target){
            front++;
        }
    }
    return {0, 0};
}
/*Method 2 hashing
    time complexity O(nlogn)
    space O(n)*/
    vector<int> twoSum2(vector<int>& nums, int target) {
        //making hash
        map<int, int> hash;  //map<num, index>
        for(int i = 0; i < nums.size(); i++){
            int curr = nums[i];
            
            //checking for sum
            int required = target - curr;
            if(hash.find(required) != hash.end()){
                return {i, hash[required]};
            }
            
            //if current index already in hash
            if(hash.find(curr) != hash.end()  && curr*2 == target){ 
                return {i, hash[curr]};
            }
            hash[curr] = i;
        }
        return {};
    }

int main(){
    vector<int> input = {3,3};
    int target = 6;
    vector<int> result = twoSum2(input, target);
    for(int num: result){
        cout<<num<<" ";
    }
    return 0;
    }