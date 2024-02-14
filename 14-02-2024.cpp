class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>x;
        vector<int>y;
        for(auto ele:nums)
        {
            if(ele>=1)
            {
              x.push_back(ele);
            }
            else
            {
                y.push_back(ele);
            }
        }
        for(int i=0;i<nums.size();i=i+2)
        {
            nums[i]=x[i/2];
            nums[i+1]=y[i/2];
        }
        return nums;
    }
};
