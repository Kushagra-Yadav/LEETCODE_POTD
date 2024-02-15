class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long int pref_sum=nums[0]+nums[1];
        long long int ct=0;
        for(int i=2;i<nums.size();i++)
        {
            if(pref_sum>nums[i])
            {
                ct=max(ct,pref_sum+nums[i]);
            }
            pref_sum+=nums[i];
        }
        return ct==0?-1:ct;
    }
};
