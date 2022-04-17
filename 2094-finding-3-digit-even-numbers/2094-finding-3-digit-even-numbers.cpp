class Solution {

    private:
    bool check(int num,int freq[])
    {
        int freq2[10] = {0};
        
        while(num!=0)
        {
            int rem= num % 10;
            freq2[rem]++;
            num = num/10;
        }
        
        for(int i=0;i<10;i++)
        {
            if(freq2[i] && freq2[i] > freq[i])
                return false;
        }
        return true;
    }
    
    
    public:
    
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        int freq[10] = {0};
        for(auto &it: digits)
        {
            freq[it]++;
        }    
        
        for(int i=100;i<=999;i=i+2)
        {
            if(check(i,freq))
                ans.push_back(i);
        }
        return ans;
    
    }
};