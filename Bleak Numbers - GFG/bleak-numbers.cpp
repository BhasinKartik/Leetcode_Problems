//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
int csb(int n){
    int cnt=0;
    int i=0;
    while(n>0 && i<=30){
        if(n&(1<<i))cnt++;
        i++;
    }
    return cnt;
}
	int is_bleak(int n)
	{
	    for(int i=n-30;i<=n;i++){
	        if(i+csb(i)==n)return 0;
	    }
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends