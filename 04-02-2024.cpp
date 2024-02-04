class Solution {
public:
    string minWindow(string s, string t) {
        int best=1e9;
        int l=0;int r=0;
        unordered_map<char,int>fs,ft;
        for(auto x:t)
        ft[x]++;int start=0;
        while(r<s.size())
        {
            fs[s[r++]]++;
            while(1)
            {
                bool ok=1;
                for(auto x:ft)
                {
                    if(fs[x.first]<x.second)
                    {
                        ok=0;
                        break;
                    }
                }
                if(!ok)
                break;

                if(r-l<best)
                {
                    best=r-l;
                    start=l;
                }
                fs[s[l++]]--;
            }
        }
        if(best==1e9)
        return "";
        return s.substr(start,best);
    }
};
