#include <bits/stdc++.h>
using namespace std;
/*Brute force compare for each possible pair
time O(n2)
space O(1)*/
int maxProfit(vector<int>& prices) {
int n = prices.size();
int max_profit = 0;
for(int start = 0; start < n; start++){
    int profit = 0;
    for(int end = start; end < n; end++){
        profit = prices[end] - prices[start];
        max_profit = max(profit, max_profit);
    }
}
return max_profit;
}

/*One pass algorithm
1. traverse 
2. keep track of minium element upto now
3. keep updating the max_profit according to that*/
int maxProfit(vector<int>& prices) {
    int max_profit = 0;
    int n = prices.size();
    int min_price = prices[0];
    for(int i = 0; i < prices.size(); i++){
        min_price = min(min_price, prices[i]);

        max_profit = max(prices[i] - min_price, max_profit);
    }
    return max_profit;
}


int main(){
return 0;
}