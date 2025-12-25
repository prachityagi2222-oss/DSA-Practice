*Method 3 Kadane's Algorithm
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