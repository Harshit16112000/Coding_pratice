class Solution {
public:
   void generate(int open,int close, vector<string>& v ,string  op)
    {
        if(open == 0 && close == 0)
        {
            v.push_back(op);
            return;
        }
       if(close > open)
       {
           string op2 = op;
           op2.push_back(')');
           generate(open,close-1,v,op2);
       } 
        
        if(open != 0)
        {
            string op1 = op;
            op1.push_back('(');
           // erase(v.begin() + 0);
            generate(open-1,close,v,op1);
        }
       
       return;
    }
    vector<string> generateParenthesis(int n) {
     
        
        int open = n;
        int close = n;
        vector<string> v;
        string op = "";
        generate(open,close,v,op);
        return v;
        
    }
};