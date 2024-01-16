class RandomizedSet {
public:
  unordered_map<int,int>m;
  vector<int>v;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(m.find(val)!=m.end())
        return 0;
        m[val]=v.size();
        v.push_back(val);
        return 1;
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end())
        return 0;
        int p1=m[val];
        int p2=v.size()-1;
        swap(v[p1],v[p2]);
        m[v[p1]]=p1;
        v.pop_back();
        m.erase(val);
        return 1;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
