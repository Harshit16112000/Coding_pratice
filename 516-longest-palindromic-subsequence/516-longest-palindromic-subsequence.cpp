class Solution {
public:
    int longestPalindromeSubseq(string s) {
        
        string rev = string(s.rbegin(),s.rend()); 
        int n = s.size();
        int m = s.size();
        
        
        int t[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i == 0 || j == 0)
                    t[i][j] = 0;
            }
        }
        
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s[i-1] == rev[j-1])
                    t[i][j] = 1 + t[i-1][j-1];
                else
                    t[i][j] = max(t[i-1][j],t[i][j-1]);
            }
        }
        return t[n][m];
    }
};