class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>st(26,0);
        for(int i=0;i<s.size();i++)
        st[s[i]-'a']++;
        string res="";
        for(int i=0;i<order.size();i++)
        {
            while(st[order[i]-'a'])
            {
                res+=order[i];
                st[order[i]-'a']--;
            }
        }
        for(int i=0;i<26;i++)
        {
              while(st[i])
                {
                    res+=i+'a';
                    st[i]--;
                }
            
        }
        return res;
    }
};
