class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map <int, int> map;
        vector<int> ans;
        
    for( int i=0; i<nums.size();i++)
    {
        map[nums[i]]++;
    }
        
        priority_queue<pair<int, int>> minh; 
        for(auto i=map.begin(); i!=map.end(); i++) 
    {
        minh.push({-i->second, i->first});
    }
    while(minh.size() > 0) 
    {
        for(int i=0;i< -(minh.top().first);i++)
        {
        ans.push_back(minh.top().second);
        }
        minh.pop();
    }
        //reverse(ans.begin(),ans.end());
        return ans;
    }
};