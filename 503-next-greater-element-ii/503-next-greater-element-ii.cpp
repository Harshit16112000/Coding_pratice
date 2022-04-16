class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         int n = nums.size();
        stack<int> st;
        vector<int> v(n);
        
        
     
        for(int i=n-1;i>=0;i--)
        {
            st.push(nums[i]);
        }
        
        
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top() <= nums[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                v[i] = st.top();
            }
            else
            {
                v[i] = -1;
            }
            st.push(nums[i]);
        }
        return v;
    }
};