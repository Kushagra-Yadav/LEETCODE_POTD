class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0)
        return false;
      int up=ceil(log2((n)));
        int down=floor(log2((n)));
        
        return up==down;
    }
};
