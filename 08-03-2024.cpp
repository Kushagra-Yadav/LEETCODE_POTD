class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
       vector<int>v(100,0);int mx=0;
       for(int i=0;i<nums.size();i++)
       {
           v[nums[i]-1]++; 
           mx=max(mx,v[nums[i]-1]);
       }
       int ct=0;
       for(auto x:v)
       ct+= x==mx?mx:0;
       return ct;


    }
};
