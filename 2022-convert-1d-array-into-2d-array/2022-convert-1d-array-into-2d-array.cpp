class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
       
        vector<vector<int>> output;
        vector<int> temp;
        
      if (m * n != original.size()) return {};
        
        int index = 0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                temp.push_back(original[index++]);
            }
            output.push_back(temp);
            temp.clear();
        }
        return output;
        
    }
};