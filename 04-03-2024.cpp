class Solution {
public:
   
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score=0;int ans=0;
        sort(tokens.begin(),tokens.end());
        int i=0;int j=tokens.size()-1;
        int s=0;
        while(i<=j)
        {
           if(power>=tokens[i])
           {
               s++;
               power-=tokens[i];
               i++;
           }
           else if(s>=1)
           {
                s--;
                power+=tokens[j];
                j--;
           }
           else
           {
               break;
           }
           ans=max(ans,s);
        }
        return ans;
    }
};
