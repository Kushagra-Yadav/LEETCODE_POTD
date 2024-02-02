class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q; vector<int>ans;
        for(int i=1;i<=8;i++)
        q.push(i);
        while(!q.empty())
        {
           int f=q.front();
           q.pop();
           if(f>=low && f<=high)
           ans.push_back(f);
           int last=f%10;
           if(last!=9)
           {
           int ch=(f*10)+(last+1);
           if(ch<=high)
           q.push(ch);
           }
        }
        return ans;
    }
};
