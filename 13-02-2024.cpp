class Solution {
public:
     bool palindrome(string &s)
     {
         int i=0;int j=s.size()-1;
         while(i<=j)
         {
             if(s[i++]!=s[j--])
             return false;
         }
         return true;
     }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(palindrome(words[i]))
            return words[i];
        }
        return "";
    }
};
