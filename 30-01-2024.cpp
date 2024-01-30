class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(auto x:tokens)
        {
             if(x=="+" || x=="-" || x=="*" || x=="/")
            {
                int f_top=s.top(); s.pop();
                int s_top=s.top(); s.pop();
                if(x=="+")
                {
                  s.push(s_top+f_top);
                }
                else if(x=="-")
                {
                 s.push(s_top-f_top);
                }
                else if(x=="*")
                {
                    s.push(s_top*f_top);
                }
                else if(x=="/")
                {
                    s.push(s_top/f_top);
                }
            }
            
            else 
            {
                int xx=stoi(x);
                s.push(xx);
            }
          
        }
     return s.top();
    }
};
