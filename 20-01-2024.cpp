class Solution {
public:
    vector<int>getNLS(vector<int>& a,int n)
    {
        vector<int>q(n);stack<int>s;
        for(int i=0;i<n;i++)
        {
            
                while(!s.empty() && a[s.top()]>=a[i])
                s.pop();
                s.empty()?q[i]=-1:q[i]=s.top();
                s.push(i);
            
        }
        return q; 
    }
    vector<int>getNRS(vector<int>& a,int n)
    {
        vector<int>q(n);stack<int>s;
        for(int i=n-1;i>=0;i--)
        {
           
                while(!s.empty() && a[s.top()]>a[i])
                s.pop();
                s.empty()?q[i]=n:q[i]=s.top();
                s.push(i);
            
        }
        return q;

    }
    int sumSubarrayMins(vector<int>& arr) {
       vector<int>NLS;
       vector<int>NRS;
       NLS=getNLS(arr,arr.size());
       NRS=getNRS(arr,arr.size()); 
       long long int ans=0;
       for(int i=0;i<arr.size();i++)
       {
           int ls=i-NLS[i];
           int rs=NRS[i]-i;
           long long int t=(ls*rs)%1000000007;
           t=(t*arr[i])%(1000000007);
           ans=(ans+t)%(1000000007);
       }
       return (int)ans;
    }
};
