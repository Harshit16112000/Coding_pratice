class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int>ans;
      //  int maxi = 0;
        int i=0,j=0;
       list<int> li;
       while(j < nums.size())
       {
            if(li.empty())
                li.push_back(nums[j]);
           else
           {
               while(!li.empty() && li.back() < nums[j])
                   li.pop_back();
               li.push_back(nums[j]);
           }
           
          if(j - i + 1 < k )
              j++;
           else if(j-i+1 == k)
           {
               ans.push_back(li.front());
               if(nums[i] == li.front())
                   li.pop_front();
               
               i++;
               j++;
           }
       }
        return ans;
    }
};