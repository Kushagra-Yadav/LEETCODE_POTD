class Solution {
public:
    int maxDepth(string s) {
        if(s=="")
        return 0;
        int count = 0, ans = 0;
    for (int i = 0;i<s.size(); i++) {
          if (s[i] == '(') 
            {
                count++;
                ans=max(ans,count);
            }
           else  if (s[i] == ')') 
            {
                count--;
            }
            else
            {continue;}
            
    }
    return ans;
    }
};
