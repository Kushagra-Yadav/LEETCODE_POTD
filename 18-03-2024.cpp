class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        int ct=1;
        sort(p.begin(),p.end(),[&](vector<int>&a,vector<int>&b)
        {
            return a[0]<b[0];
        });
        int end=p[0][1];
        for(int i=1;i<p.size();i++)
        {
            if(p[i][0]<=end)
            {
                end=min(end,p[i][1]);
            }
            else
            {
                ct++;
                end=p[i][1];
            }
        }
        return ct;
    }
};
