class Solution {
public:

int help(int i,int j,vector<vector<int>>& m,int n,vector<vector<int>>&v)
{
 if(i==n-1)return m[i][j];
 if(v[i][j]!=INT_MAX)return v[i][j];
int d=INT_MAX;int dr=INT_MAX;int dl=INT_MAX;
 if(j-1>=0)
 {
     d=help(i+1,j-1,m,n,v);
 }

  dl=help(i+1,j,m,n,v);
 
 if(j+1<n)
 {
 dr=help(i+1,j+1,m,n,v);
 }
 return v[i][j]= m[i][j]+min(d,min(dl,dr));
}
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int ans=INT_MAX;int n=matrix.size();
        vector<vector<int>>v(n+1,vector<int>(n+1,INT_MAX));
        for(int j=n-1;j>=0;j--)
        {
        int helped=help(0,j,matrix,n,v);
        v[0][j]=helped;
        ans=min(ans,helped);
        }
        return ans;
    }
};
