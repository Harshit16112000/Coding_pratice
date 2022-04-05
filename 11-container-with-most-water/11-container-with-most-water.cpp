class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int j= height.size() -1;
        int i = 0;
        
        while(i < j)
        {
            int hei = min(height[i],height[j]);
            ans = max(ans,(j-i)*hei);
            while(height[i] <= hei && i < j)
                i++;
            while(height[j] <= hei && i < j)
                j--;
        }
        return ans;
    }
};