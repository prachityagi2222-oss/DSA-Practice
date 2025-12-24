#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//brute force, time complexity: n**2
int fun1(vector<int>& nums) {
    int n=nums.size();
    int found=0;
    int num;
    //iterating through each element
    for(num=0;num<n;num++)
    {
        found=0;
        for(int j=0;j<n;j++)
        {
            if(num==nums[j])
            {
                found=1;
                break;

            }
        }
        if (found==0)
        {
            return num;
        }
    }
    return num;
}
//sum approach: time complexity-n
int fun2(vector<int>& nums){
    size_t n=nums.size();
    int s=(n+1)*(n)/2;
    int sum=0;
    for (int i=0;i<n;i++)
    {
        sum+=nums[i];
    }
    return s-sum;
}


/*Method 1: sort array, then traverse and find the missing element
time complexity O(nlogn)
space complexity O(1)*/
int fun3(vector<int>& nums) {
    //sort elements
    sort(nums.begin(), nums.end());
    //find out the missing element
    int next = 0;
    for (int i = 0; i < nums.size(); i++, next++){
        int current = nums[i];
        if (current != next){
            return next;
        }
    }
    return next;
}
int main()
{
    vector <int> nums={0, 1, 2, 4, 5, 6};
    int result=fun2(nums);
    cout<<endl<<result;
    return 0;
}