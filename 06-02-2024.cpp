class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
         vector<vector<string>>ans;
        for(const auto&x: strs)
        {
            string temp=x;
            sort(temp.begin(),temp.end());
            m[temp].push_back(x);
        }
         for(const auto&[key,value]:m)
         {
             ans.push_back(value);
         }
         return ans;
    }
};
