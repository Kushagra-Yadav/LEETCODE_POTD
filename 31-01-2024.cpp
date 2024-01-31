class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int>s;int n=t.size();vector<int> d(n,0);
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
            s.push(i);
             continue;
            }
            else
            {
                while(!s.empty() && t[i]>=t[s.top()])
                {
                 s.pop();
                }
               
                if(!s.empty())
                d[i]=(s.top()-i);
                 s.push(i);
                
            }
        }
        return d;
    }
};
