class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int n = heights.size();
        vector<int> left(n);
        vector<int> right(n);
        vector<int> width(n);
        stack<pair<int,int>> st1;
        stack<pair<int,int>> st2;
        int maxi= 0;
        
        for(int i=0;i<n;i++)
        {
            while(!st1.empty() && st1.top().first >= heights[i])
                st1.pop();
            if(!st1.empty())
                left[i] = st1.top().second;
            else 
                left[i] = -1;
            st1.push({heights[i],i});
        }
        
        
        
         for(int i=n-1;i>=0;i--)
        {
            while(!st2.empty() && st2.top().first >= heights[i])
                st2.pop();
            if(!st2.empty())
                right[i] = st2.top().second;
            else 
                right[i] = n;
            st2.push({heights[i],i});
        }
        
        
        for(int i=0;i<n;i++)
        {
            width[i] = right[i] - left[i] -1 ;
        }
        
        
        for(int i=0;i<n;i++)
        {
            maxi = max(maxi,width[i] * heights[i]);
        }
        return maxi;
    }
};