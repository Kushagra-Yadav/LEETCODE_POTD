class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_set<int>s;
        for(int i=1;i<=n;i++)
        s.insert(i);
        for(auto x:trust)
        {
            if(s.find(x[0])!=s.end())
             s.erase(x[0]);
        }
        if(s.size()!=1)return -1;
        int town_j=*(s.begin());
        unordered_set<int>s2;
        for(int i=0;i<trust.size();i++)
        {
            if(trust[i][1]==town_j)
            s2.insert(i);
        }
        if(s2.size()!=n-1)
        return -1;
        return town_j;
       
    }
};
