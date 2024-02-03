class Solution {
public:
  int help(int i,vector<int>& arr, int k,vector<int>&v)
  {

      int max_here=0;int ans=0;
      if(v[i]!=-1)return v[i];
      for(int j=i;j<arr.size() && j<i+k ;j++)
      {
          max_here=max(max_here,arr[j]);
          ans=max(ans,(max_here* (j - i + 1))+help(j+1,arr,k,v));
      }
      return v[i]=ans;
  }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>v(arr.size()+1,-1);
   return help(0,arr,k,v);
    }
};
