/*time O(n)
space O(n)*/
#include <bits/stdc++.h>
using namespace std;

// Function to remove duplicate characters
// using unordered_set
string removeDuplicates(string &s)
{
    unordered_set<char> exists; 
    string ans = "";

    // Traverse through the string
    for (char c : s) {
      
        // If character is not found in set, 
        // add it to result
        if (exists.find(c) == exists.end()) {
            ans.push_back(c);
            exists.insert(c); 
        }
    }
    
    return ans;
}

// Driver code
int main()
{
    string s = "geeksforgeeks";
    cout << removeDuplicates(s) << endl;
    return 0;
}