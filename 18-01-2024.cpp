class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>m;int s=0;int ct=0;
        for(int i=0;i<nums.size();i++)
        {
           s+=nums[i];
           if(s==goal)ct++;
           if(m.find(s-goal)!=m.end())
           {
               ct+=m[s-goal];
           }
           m[s]++;
        }
        return ct;
    }
};
