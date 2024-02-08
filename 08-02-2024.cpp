class Solution {
public:
  int help(int n,vector<int>&dp)
  {
     if(n==0)
     return 0;
     if(dp[n]!=-1)
     return dp[n];
      int ans=10001;
      int l=sqrt(n);
      for(int v=1;v<=l;v++)
      {
          ans=min(ans,1+help(n-pow(v,2),dp));
         
      }
         return  dp[n]=ans;
  }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return help(n,dp);
    }
};
