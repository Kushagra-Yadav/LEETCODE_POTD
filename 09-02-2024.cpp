class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n=nums.size();
        vector<int>LIS(n,1),prevInd(n,-1);
        sort(nums.begin(),nums.end());
        int maxLength=0;int maxLengthIndex=-1;
        for(int i=0;i<n;i++)
        {
            int j=i-1;int toAdd=0;
            while(j>=0)
            {
               if(nums[i]%nums[j]==0 && LIS[j]>toAdd)
               {
                   toAdd=LIS[j];
                   prevInd[i]=j;
                  
               }
               j--;
            }
            LIS[i]=LIS[i]+toAdd;
            if(LIS[i]>maxLength)
            {
                maxLength=LIS[i];
                maxLengthIndex=i;
            }
        }
        vector<int>ans;
        while(maxLengthIndex>=0)
        {
           ans.push_back(nums[maxLengthIndex]);
           maxLengthIndex=prevInd[maxLengthIndex];
        }
        return ans;
    }
};
