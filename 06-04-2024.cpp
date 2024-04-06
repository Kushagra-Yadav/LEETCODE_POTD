class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int ct=0;
        for(int i=0;i<s.size();i++)
        {
            if(ct==0 && s[i]==')')
            {
                s[i]='1';
            }
            else if(ct>0 && s[i]==')')
            {
                ct--;
            }
            else if(s[i]=='(')
            {
                ct++;
            }
        }
        int i=s.size()-1;
        while(ct>0 && i>=0)
        {
            if(s[i]=='(')
            {
               s[i]='1';
               ct--;
            }
            i--;
        }
        string res="";
        for(int i=0;i<s.size();i++)
        { 
            if(s[i]!='1')
            res+=s[i];
        }
        return res;
    }
};
