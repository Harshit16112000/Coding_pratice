class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
//         vector<vector<int>> answer;
//         int n = grid[0].size();
//         int m = grid.size();
        
//         vector<int> ans;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 ans.push_back(grid[i][j]);
//             }
//         }
        
        
//       for(int i=0;i<k;i++)
      
//       {
//         int last = ans[ans.size()-1];
//           for(int j= ans.size();j>0;j--)
//           {
//               ans[j] = ans[j-1];
              
//           }
//           ans[0] = last;
          
//       }
        
//         vector<int> output;
//         int index = 0;
//          for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 output.push_back(ans[index++]);
//             }
             
//              answer.push_back(output);
//              output.clear();
//         }
        
//         return answer;
         int m=grid.size();
        int n=grid[0].size();
        
     
        
        vector<vector<int>> mat(m , vector<int>(n));
        
        for(int i=0;i<k;i++)
        {
         
            for(int a=0;a<m;a++)
            {
                for(int b=0;b<n;b++)
                {
                    if(b!=n-1)
                    {
                        mat[a][b+1]=grid[a][b];
                    }
                }
            }
            
            mat[0][0]=grid[m-1][n-1];
            
            for(int a=0;a<m-1;a++)
            {
                mat[a+1][0]=grid[a][n-1];
            }
            
            grid=mat;
        }
        return grid;
        
    }
};