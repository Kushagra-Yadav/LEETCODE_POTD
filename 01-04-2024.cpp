class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        while(n>=0 && s[n]==' ')
        {
             n--;
        }
        int l=n;
        while(n>=0 && s[n]!=' ')
        {
            n--;
        }
        return l-n;
    }
};
