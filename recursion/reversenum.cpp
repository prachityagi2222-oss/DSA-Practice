#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    if(n <= 0){
        return 0;
    }
    int digit = n%10;
    return (digit + reverse())
}

int main(){
    int result = reverse(10);
    cout << result;
}