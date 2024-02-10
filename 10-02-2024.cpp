# Method 1

class Solution {
public:
   int a[1001][1001];
    bool check(int i,int j,string &s)
    {
        if(i>j)
        return 1;
        if(a[i][j]!=-1)
        return a[i][j];
        if(s[i]==s[j])
        {
          return a[i][j]=check(i+1,j-1,s);
        }
        return a[i][j]=0;
    }
    int countSubstrings(string s) {
        int ct=0;
        memset(a,-1,sizeof(a));
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                 if(check(i,j,s))
                 ct++;
            }
        }
        return ct;
    }
};

#Method 2
class Solution {
public:
    int a[1001][1001];
    int countSubstrings(string s) {
        memset(a,-1,sizeof(a));int ct=0;
        for(int L=1;L<=s.size();L++)
        {
            for(int i=0;i+L-1<s.size();i++)
            {
                int j=i+L-1;
                if(i==j)
                 a[i][j]=1;
                 else if(i+1==j)
                 a[i][j]=(s[i]==s[j]);
                 else 
                 a[i][j]=(s[i]==s[j]) && (a[i+1][j-1]);
                 if(a[i][j])
                 ct++;

            }
        }
        return ct;
    }
};
#Method 3
class Solution {
public:
     int check(int i,int j,string &s)
     {
         int c=0;
         while(i>=0 && j<s.size() && s[i]==s[j])
         {
             c++;
             i--;j++;
         }
        return c;
     }
    int countSubstrings(string s) {
        int ct=0;
        
        for(int i=0;i<s.size();i++)
        {
            ct+=check(i,i,s)+check(i,i+1,s);
        }
        return ct;
    }
};
