#include <bits/stdc++.h>
using namespace std;

/*Linear Search
time complexity O(N)
space complexity O(1)*/
int linearSerach(vector<int> nums, int element){
    for (int i = 0; i < nums.size(); i++){
        if(nums[i]==element){
            return i;
        }
    }
    return -1;
}

/*Binary Search
time complexity O(log n)
space complexity O(1)*/
int binarySearch(vector<int> nums, int element){
    int low = 0;
    int high = nums.size();
    int mid = (low+high)/2;

    while (low < high){
        mid = (low+high)/2;
        if (nums[mid] > element){
            high = mid-1;
        }
        else if(nums[mid] < element){
            low = mid + 1;
        }
        else
            return mid;
    }
    return -1;
}

/*Fibonnacci search
time complexity O(log n)
space complexity O(1)*/
void fibonacciSearch(vector<int> nums, int element){
    
}