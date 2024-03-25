class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
         vector<int>r;
        for(int i=0;i<nums.size();i++)
            {
              
               int ind=abs(nums[i])-1;
               if(nums[ind]<0)
                 r.push_back(abs(nums[i]));
                 else
                nums[ind]*=-1;

            }
            return r;
    }
};
