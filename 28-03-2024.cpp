class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0,j=0;
        unordered_map<int,int>m;int ans=0;
        while(j<nums.size())
        {
            m[nums[j]]++;
            if(m[nums[j]]>k)
            {
                while(i<j && nums[i]!=nums[j])
                {
                  m[nums[i]]--;
                  i++;
                }
                if(nums[i]==nums[j])
                {
                    i++;
                    m[nums[j]]--;
                }
            }
            j++;
            ans=max(ans,j-i);

           
        }
        
        return ans;
    }
};
