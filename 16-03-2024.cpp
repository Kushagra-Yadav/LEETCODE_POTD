class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int pre_sum=0;
       unordered_map<int,int>m;
        m[0]=-1;int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i]==1?1:-1;
           if(m.find(pre_sum)!=m.end())
           {
             ans=max(ans,i-m[pre_sum]);
           }
           else
           {
            m[pre_sum]=i;
           }
        }
        return ans;
    }
};
