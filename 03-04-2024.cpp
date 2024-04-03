class Solution {
public:
   bool valid(int x,int y,vector<vector<char>>& b)
   {
    if(x>=0 && x<b.size() && y>=0 && y<b[0].size())
    return true;
    return false;
   }
   bool help(int i,int j,int k,vector<vector<char>>& b,string &w)
   {
    if(k==w.size())
    return true;
    if(valid(i,j,b) && b[i][j]!='+' && b[i][j]==w[k])
    {
        char t=b[i][j];
        b[i][j]='+';
       bool a1= help(i,j+1,k+1,b,w)|help(i,j-1,k+1,b,w)|help(i+1,j,k+1,b,w)|help(i-1,j,k+1,b,w);
       b[i][j]=t;
       return a1;
    }
    return false;
   }
    bool exist(vector<vector<char>>& board, string &word) {
       // vector<vector<bool>>vis(board.size(),vector<bool>(board[0].size(),false));
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
              if(help(i,j,0,board,word))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
