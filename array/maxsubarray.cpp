#include <bits/stdc++.h>
using namespace std;

/*Method 1 Brute force*/
int maxSubArray(vector<int>& nums) {
    int n = nums.size();
    int max_sum = nums[0];

    //loop to change the length 
    for(int i = 1; i <= n ; i++){
        //loop to select the subarrays
        for(int j = 0; j < n; j++){
            int start = j;
            int end = j+i;
            if(end > n){
                break;
            }
            //  cout<<"for start = "<<start<<", end = "<<end<<", sum = ";
            int sum = 0;
            //loop to iterate through the subarray
            for(int k = start; k < end; k++){
                sum += nums[k];
            }
            //  cout<<sum<<endl;
            if(sum > max_sum){
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

/*Method 2 Brute force with O(n3 time complexity*/
int maxSubArray1(vector<int>& nums){
    int max_sum = nums[0];
    //loop to select start
    for(int start = 0; start < nums.size(); start++){
        //loop to sleect end pointer of subarray
        for(int end = start+1; end < nums.size(); end++){
            //calculatingi sum of sub array
            int sum = 0;
            for(int i = 0; i <= end; i++){
                sum += max_sum;
            }
            if(sum > max_sum){
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

/*Method 2.1 brute force modifcation
time O(n2)
space O(1)*/
int maxSubArray2(vector<int>& nums){
    int max_sum = nums[0];
    //loop to select start of subarray
    for(int start = 0; start < nums.size(); start++){
        int current_sum = 0;
        //loop traverse till variable end
        for(int end = start; end < nums.size(); end++){
            current_sum += nums[end];
            max_sum = max(current_sum, max_sum);
        }
    }
    return max_sum;
}

/*Method 3 Kadane's Algorithm
time O(n)
space O(1)*/
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            max_sum = max(sum, max_sum);

            if (sum < 0){
                sum = 0;
            }
        }
        return max_sum;
    }

    int main(){
    vector<int> nums = {-1};
    int result = maxSubArray(nums);
    cout<<result;
    return 0;
}