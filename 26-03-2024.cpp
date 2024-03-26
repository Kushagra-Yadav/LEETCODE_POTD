class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            long int ind=(long)nums[i]-1;
            if(ind<0 || ind >=nums.size() ||i==nums[i]-1)
            {
                continue;
            }
            else
            {
                if(nums[i]!=nums[ind])
                {
                swap(nums[i],nums[ind]);
                i--;
                }
            }
        }
        int i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=i+1)
            break;
        }
        return i+1;
    }
};
