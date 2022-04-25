// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int amount) 
	{ 
	    // Your code goes here
	    //sort(coins.begin(), coins.end());
	    sort( coins ,coins+M );
	      int n = M;
        int dp[n+1][amount+1];
        
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<amount+1;j++)
            {
                
                if(i == 0)
                    dp[i][j] = INT_MAX-1;
                    if(j == 0 )
                    dp[i][j] = 0;
            }
        }
        
        
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<amount+1;j++)
            {
                if(coins[i-1] <= j)
                {
                       dp[i][j] = min( dp[i-1][j] ,1 + dp[i][j-coins[i-1]]);
                                                         
                }
                 else
                    dp[i][j] = dp[i-1][j];
            }
        }
         
         if(dp[n][amount] == INT_MAX -1)
          return -1;
       return dp[n][amount];

	} 
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends