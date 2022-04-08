class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     
        vector<vector<int>> ans;
        priority_queue<pair<int, pair<int,int>>> pq;
        int n = points.size();
        for(int i = 0;i<n;i++)
        {
            int x = points[i][0];
            int y = points[i][1];
            pq.push({x*x + y*y,{x,y}});
            
            if(pq.size() > k)
                pq.pop();
        }
        
        while(pq.size() > 0)
        {
          pair<int,int> p = pq.top().second;
  ans.push_back({p.first,p.second});
            pq.pop();
        }
        return ans;
        
    }
};