class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ct=0;
        int i=0,j=0;
        int p=1;
        while(i<=j && j<nums.size())
        {
            
            if(p*nums[j]<k)
            {
               p=p*nums[j];
               j++;
                ct+=(j-i);
            }
            else
            { 
                if(p==1 && i==j)
                 {
                    i++;
                    j=i;
                 }
                 else
                 {
                  p/=nums[i];
                i++;
                 }
                
                
            }
            
        
           
        }
        
       
        return ct;
    }
};
