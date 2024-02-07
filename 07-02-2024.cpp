class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,string>m;
        for(auto x:s)
        m[x]+=x;
        vector<pair<char,int>>v;
        for(auto x:m)
        {
            v.push_back(make_pair(x.first,x.second.size()));
        }
        sort(v.begin(),v.end(),[&](pair<char,int>&p1,pair<char,int>&p2)
        {
            return p1.second>p2.second;
        });
        string ans="";
        for(auto x:v)
        {
            ans+=m[x.first];
        }
        return ans;

    }
};
