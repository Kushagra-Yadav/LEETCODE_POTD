class DSU{
    public:
    vector<int>parent,rank;
    DSU(int n){
     parent.resize(n);
     rank.resize(n,0);
     for(int i=0;i<n;i++)
     parent[i]=i;
    }
    int find(int x)
    {
      if(parent[x]==x)
      return x;
      return parent[x]=find(parent[x]);
    }
    void Union(int a,int b)
    {
        int par1=find(a);
        int par2=find(b);
        if(par1!=par2)
       {
        rank[par1]>=rank[par2] ? parent[par2]=par1:parent[par1]=par2;
        rank[par1]+=rank[par1]==rank[par2];
       }
    }
    void Reset(int x)
    {
        parent[x]=x;
    }
};



class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        sort(meetings.begin(),meetings.end(),[&](vector<int>&a,vector<int>&b)
        {
            return a[2]<b[2];
        });
        DSU dsu(n);
        dsu.Union(0,firstPerson);
        for(int i=0;i<meetings.size();)
        {
            int currMeetingTime=meetings[i][2];
            vector<int>meetPeoples;
            while(i<meetings.size() && meetings[i][2]==currMeetingTime)
            {
                dsu.Union(meetings[i][0],meetings[i][1]);
                meetPeoples.push_back(meetings[i][0]);
                meetPeoples.push_back(meetings[i][1]);
                i++;
            }
            for(auto x:meetPeoples)
            {
                if(dsu.find(x)!=dsu.find(0))
                dsu.Reset(x);

            }

        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
         if(dsu.find(i)==dsu.find(0))
        {
            ans.push_back(i);
        }
        }
        return ans;
    }
};
