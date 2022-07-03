class Solution {
public:
    
    int wiggleMaxLength(vector<int>& nums) {
        int len=nums.size();
        if(len==1) return len;
        int inc=1,dec=1; //2 peak
       
        for(int i=1;i<len;i++)
        {
            int def=nums[i]-nums[i-1];
            if(def>0) inc=dec+1;
            if(def<0) dec=inc+1;
        }
        
        
        return max(inc,dec);
    }
};