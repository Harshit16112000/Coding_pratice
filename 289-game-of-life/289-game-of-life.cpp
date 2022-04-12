class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> temp = board;
        int m = board.size();
	    int n = board[0].size();
        for(int i=0; i < m; i++) {
            for(int j=0; j < n; j++) {
                int liveNeigh = 0;
        if(i > 0) {
            if(temp[i-1][j] == 1) {
                liveNeigh++;
            }
        } 
        
        if(i < m-1) {
            if(temp[i+1][j] == 1) {
                liveNeigh++;
            }
        } 
        
        if(j > 0) {
            if(temp[i][j-1] == 1) {
                liveNeigh++;
            }
        }
        
        if(j < n-1) {
            if(temp[i][j+1] == 1) {
                liveNeigh++;
            }
        } 
        
        if(i > 0 && j > 0) {
            if(temp[i-1][j-1] == 1) {
                liveNeigh++;
            }
        } 
        
        if(i < m-1 && j < n-1) {
            if(temp[i+1][j+1] == 1) {
                liveNeigh++;
            }
        } 
        
        if(i < m-1 && j > 0) {
            if(temp[i+1][j-1] == 1) {
                liveNeigh++;
            }
        } 
        
        if(i > 0 && j < n-1) {
            if(temp[i-1][j+1] == 1) {
                liveNeigh++;
            }
        }
                if(board[i][j] == 0) {
                    
                    if(liveNeigh == 3) {
                        board[i][j] = 1;
                    }
                } else {
                    if(liveNeigh < 2 || liveNeigh > 3) {
                        board[i][j] = 0;
                    }
                }
            }
        }
    }
};