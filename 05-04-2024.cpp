class Solution {
public:
    string makeGood(string s) {
        string res="";
        for(int i=0;i<s.size();i++)
        {
            if(res.size()==0)
            res+=s[i];
            else
            {
                int l=res.back();
                if(islower(l)&&toupper(l)==s[i] || isupper(l)&&tolower(l)==s[i])
                res.pop_back();
                else
                res.push_back(s[i]);
            }
        }
        return res;
    }
};
