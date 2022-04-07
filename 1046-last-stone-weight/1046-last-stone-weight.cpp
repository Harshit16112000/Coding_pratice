class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     priority_queue<int> pq;
        
        for(int i=0;i<stones.size();i++)
        {
            pq.push(stones[i]);
            
        }
        int first = 0,second = 0;
        while(pq.size() > 1)
        {
            if(pq.top())
            { 
            first = pq.top();
            pq.pop();
            }
            
            if(pq.top())
            {
             second = pq.top();
                // if(pq.size() == 1)
                //     return pq.top();
            pq.pop();
            }
            if(first > second)
              pq.push(first - second);
        }
        
      return pq.empty() ? 0 : pq.top();
    }
};