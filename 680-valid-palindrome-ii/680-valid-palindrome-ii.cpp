class Solution {
public:
    bool validPalindrome(string s) {
      
        /*int n = s.size();
        int j = n - 1;
        int i = 0;
        
        int count = 0;
        while(i<=j)
        {
            if(s[i] != s[j])
                count++;
            i++;
            j--;
            
        }
        if(count == 1 || count == 0)
             return true;
        else
            return false;
            */
        
        int i=0;
        int j=s.size()-1;
        int c1=0,c2=0;
  while(i<j)
  {
   if(s[i]==s[j])
   {
    i++;
    j--;
    }
   else
   {
    i++;
    c1++;
   }
 }
i=0;j=s.size()-1;
while(i<j)
{
 if(s[i]==s[j])
 {
  i++;
  j--;
}
 else
 {
  j--;
  c2++;
}
}
if(c1==0 ||c2==0)
return true;
if(c1==1 ||c2==1)
return true;

    return false;
    
    
}
    
};