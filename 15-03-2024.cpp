class Solution {
public:
 int help(vector<int>&n,int k)
    {
       int i=0,j=0;int s=0;int ans=0;
        while(j<n.size())
        {
           s+=n[j];
           while(s>k && i<=j)
           {
            s-=n[i++]; 
           }
           ans+=j-i+1;
           j++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       return help(nums,goal)-help(nums,goal-1);
    }
};
