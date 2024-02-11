class Solution {
public:
int a[71][71][71];
  int help(int i,int j1,int j2,vector<vector<int>>& g)
  {
      if(j1<0 || j1>=g[0].size() || j2<0 || j2>=g[0].size())
      return 0;
      if(i==g.size())
      return 0;
      if(a[i][j1][j2]!=-1)return a[i][j1][j2];
      int res=g[i][j1];
      if(j1!=j2)
      res+=g[i][j2];
      int temp=0;
      for(int x=j1-1;x<=j1+1;x++)
      {
          for(int y=j2-1;y<=j2+1;y++)
          {
            temp=max(temp,help(i+1,x,y,g));
          }
      }
      return a[i][j1][j2]=res+temp;
  }
    int cherryPickup(vector<vector<int>>& grid) {
        memset(a,-1,sizeof(a));
        return help(0,0,grid[0].size()-1,grid);
    }
};
