class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx=0;long long int ans=0;
        for(int i=0;i<nums.size();i++)
        mx=max(mx,nums[i]);
        int i=0,j=0;
        int ct=0;
        while(j<nums.size())
        {
            if(nums[j]==mx)
            {
                ct++;
            }
            while(i<=j && ct>=k)
            {
             if(nums[i]==mx)
             ct--;
             ans+=(long long int)nums.size()-j;
             i++;
            }
            j++;
        }
        return ans;
    }
};
