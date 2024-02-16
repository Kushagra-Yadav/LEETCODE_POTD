class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        m[arr[i]]++;
        int ans=m.size();
        vector<int>countOfFreq(arr.size()+1,0);
        for(auto [ele,freq]:m)
        {
            countOfFreq[freq]++;
        }
        for(int freq=1;freq<countOfFreq.size();freq++)
        {
            int toRemove=min(k/freq,countOfFreq[freq]);
            k=k-(toRemove*freq);
            ans=ans-toRemove;
            if(k==0)return ans;
        }
        return ans;
    }
};
