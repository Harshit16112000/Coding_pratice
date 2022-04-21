class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int mini[n];
        int maxi[n];
        int water[n];
        mini[0] = height[0];
        maxi[n-1] = height[n-1];
        
        for(int i=1;i<n;i++)
        {
            mini[i] = max(mini[i-1],height[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            maxi[i] = max(maxi[i+1],height[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            water[i] = min(mini[i],maxi[i])-height[i];
        }
        
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans = ans + water[i];
        }
        return ans;
    }
};