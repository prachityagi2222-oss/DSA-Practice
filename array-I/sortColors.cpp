#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums) {

    //creating hash table
    int arr[3] = {0};
    for(int num: nums){
        arr[num]++;
    }
    int a = arr[0]; //zero count
    int b = arr[1]; //one count
    int c = arr[2]; //two count
    
    //assigning values
    for(int i = 0; i < a; i++){
        nums[i] = 0;
    }
    for(int i = a; i < a+b; i++){
        nums[i] = 1;
    }
    for(int i = a+b; i < a+b+c; i++){
        nums[i] = 2;
    }
}