class Solution {
public:
    int minimumLength(string s) {
        int i=0;int j=s.size()-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                char t=s[i];
                while(i<=j && s[i]==t)
                {
                          i++;
                }
                while(i<=j && s[j]==t)
                {
                          j--;
                }
            }
            else
            break;
        }
        return j-i+1;
    }
};
