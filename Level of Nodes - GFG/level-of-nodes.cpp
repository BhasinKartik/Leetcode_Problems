//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
	public:
	//Function to find the level of node X.
		void dfs(int node, vector<int>adj[],vector<int>&vis,int X, int level, int &ans){
	    vis[node]=1;
	    for(auto i:adj[node]){
	        if(!vis[i]){
	            if(i==X){
	                ans=level+1;
	                break;
	            }
	            dfs(i,adj,vis,X,level+1,ans);
	        }
	    }
	}
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    vector<int>vis(V,0);
	    int ans=-1;
	    dfs(0,adj,vis,X,0,ans);
	    return ans;
	}
};

//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends