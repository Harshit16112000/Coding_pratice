class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        list<int> ls;
        
        vector<int> ans;
        int i=0, j =0;
        while(j < nums.size())
        {
            if(ls.empty())
                ls.push_back(nums[j]);
            else{ 
                while(!ls.empty() && ls.back() < nums[j])
            
                ls.pop_back();
                ls.push_back(nums[j]);
            }
            
            if(j - i + 1 < k)
                j++;
            else if(j -i + 1 == k)
            {
                ans.push_back(ls.front());
                if(ls.front() == nums[i])
                    ls.pop_front();
                i++;
                j++;
            }
        }
        return ans;
        
    }
};