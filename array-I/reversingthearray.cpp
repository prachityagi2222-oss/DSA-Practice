#include <iostream>
#include <vector>
using namespace std;

/*method 2 swapping
time complexity O(N)
space complexity O(N)*/
void reverseArray1(vector<int> &arr , int m) {
    vector <int> res;
    //till position m
    for (int i = 0; i <= m; i++){
        res.emplace_back(arr[i]);
    }
    //after position m
    for (int i = arr.size()-1; i > m; i--){
        res.emplace_back(arr[i]);
    }
    arr = res;
}
/*method 2 swapping
time complexity O(N)
space complexity O(1)*/
void reverseArray2(vector<int> &arr , int m) {
    int i = m+1;
    int j = arr.size() - 1;
    while (i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}