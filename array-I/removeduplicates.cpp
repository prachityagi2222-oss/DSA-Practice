#include <iostream>
#include <vector>
using namespace std;
//remove duplicates using two pointer approach
int removeDuplicates(vector<int>& nums){
    int i=0;
    for (int j=1;j<nums.size();j++)
    {
            if(nums[i]!=nums[j])
            {
                i++;
                //swap the two
                int temp=nums[i];
                nums[i]=nums[j];
                nums[j]=temp;
            }
    }
    return i+1;
}

int removeDuplicatesb(vector<int>& nums) {
        int count=nums.size();
        for (int i=1;i<count;i++)
        {
            
            //removing duplicates
            if(nums[i-1]==nums[i])
            {
                count--;
                int j=i;
                while( j<nums.size()-1)
                {
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                    j++;
                }
                i--;
            }
            
        }
        return count;
    }


int main()
{
    vector <int> v={-2, 2, 4, 4, 4, 4, 5, 5};
    int result=removeDuplicates(v);
    cout<<result;
    return 0;
}