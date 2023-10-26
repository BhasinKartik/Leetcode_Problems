//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
 

// Function to calculate the length of the LCS of two strings using memoization
int lcs(const string& s1, const string& s2, vector<vector<int>>& memo, int i, int j) {
    if (i == 0 || j == 0) {
        return 0;
    }

    if (memo[i][j] != -1) {
        return memo[i][j];
    }

    if (s1[i - 1] == s2[j - 1]) {
        memo[i][j] = 1 + lcs(s1, s2, memo, i - 1, j - 1);
    } else {
        memo[i][j] = max(lcs(s1, s2, memo, i - 1, j), lcs(s1, s2, memo, i, j - 1));
    }

    return memo[i][j];
}

// Function to find the LCS of two strings




    int minimumNumberOfDeletions(string S) { 
        int n=S.size();
         vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        string T=S;
        reverse(T.begin(),T.end());
        return n-lcs(S,T,dp,n,n);
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string S;
        cin >> S;
        Solution obj;
        cout << obj.minimumNumberOfDeletions(S) << endl;
    }
    return 0;
}
// } Driver Code Ends