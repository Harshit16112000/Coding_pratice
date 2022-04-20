class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n = tickets.size();
        int cnt = 0;
        
        while(tickets[k] != 0)
        {
        for(int i=0;i<n;i++)
        {
            
            if(tickets[k] == 0)
                return cnt;
        
             if(tickets[i] == 0)
              tickets[i] = 0;
            else
            {
                tickets[i] = tickets[i] - 1;
            cnt++;
            }
                    
        }
            
        }
        
        // for(int i=0;i<n;i++)
        // {
        //     cnt= cnt + tickets[i];
        // }
        // return cnt;
        return cnt;
    }
};