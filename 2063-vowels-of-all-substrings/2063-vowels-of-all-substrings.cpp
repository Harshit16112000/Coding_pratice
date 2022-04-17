class Solution {

    private:
    bool isVowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'; 
    }
    
    
    
    
    
    
    public:
    long long countVowels(string word) {
       
        long long cnt = 0;
        long long  n = word.size();
        long long ans =0; 
        for(long long int i=0;i<n;i++)
        {
            if(isVowel(word[i]))
            {
           long long int cnt1 = i + 1;
            long long int cnt2 = n - i;
            ans += cnt1 * cnt2;
            }
        }
        return ans;
    }
};