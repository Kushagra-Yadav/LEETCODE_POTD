class Solution {
public:
     int check(vector<int>& n,int toCompare)
     {
       int i=0,j=n.size()-1;
       while(i<=j)
       {
           int m=(i+j)/2;
           if(n[m]==toCompare)
           return 1;
           else if(toCompare>n[m])
           {
            i=m+1;
           }
           else
           {
               j=m-1;
           }
       }
       return 0;
     }
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int i=0,j=0;
       while(i<nums1.size() && j<nums2.size())
       {
           auto it=lower_
       }
        return -1;
    }
};
