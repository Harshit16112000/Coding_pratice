class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
       vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
    
        priority_queue <pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        //We cannot use int in place of heap in term of tranversal from 
        for(auto i = mp.begin();i!= mp.end();i++)
        {
            pq.push({i->second,i->first});
            
            if(pq.size() > k)
                pq.pop();
        }
        
        
        while(pq.size() > 0)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
   return ans;
        
    }
};