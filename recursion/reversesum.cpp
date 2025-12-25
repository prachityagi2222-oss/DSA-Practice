#include <bits/stdc++.h>
using namespace std;

/*recursive sum using recurions
time O(n)
space O(n)*/
class Solution {
  public:
    // Function to return sum of elements
    int arraySum(vector<int>& arr) {
        // code here
        int sum = recursiveSum(arr, arr.size() - 1);
        return sum;
    }
    
    int recursiveSum(vector<int>&arr, int idx){
        if (idx < 0) return 0;
        
        return arr[idx] + recursiveSum(arr, idx-1 );
    }
};

int main(){
    return 0;
}