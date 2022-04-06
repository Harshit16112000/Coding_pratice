

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int,vector<int>,greater<int>> pqq;
        
        for(int i=0;i<nums.size();i++)
        {
            pqq.push(nums[i]);
            if(pqq.size() > k)
                pqq.pop();
        }
        return pqq.top();
    }
};