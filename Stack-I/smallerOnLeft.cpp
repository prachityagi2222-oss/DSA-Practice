
#include <bits/stdc++.h>
using namespace std;

/*Using stacks
*/

/*using brute force steps:
1. pick one element each time in the iteration
2. iterate to find out the largest element smaller than the current element
time complexity O(n)
space complexity O(1)*/
vector<int> Smallestonleft(int arr[], int n) {
    // code here
    vector<int> res;
    for (int i = 0; i < n; i++){
        int element = arr[i];
        //checking for the largest element smaller than element
        int result = -1;
        for (int j = 0; j < i; j++){
            if(arr[j] > result && arr[j] < element){
                result = arr[j];
            }
        }
        res.emplace_back(result);
    }
    return res;
}