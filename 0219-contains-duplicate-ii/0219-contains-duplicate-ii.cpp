class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        if(nums.size()==1) return false;
        
        int i,j,diff;

        
        map<int,int>m;
        
        for(int i=0;i<nums.size();i++)
        {
           
            if(m.count(nums[i]))
            {
               
                diff=abs(m[nums[i]]-i);
               
                if(diff <= k) 
                {
                  
                    return true;
                }
            }
        
            m[nums[i]]=i;
       
           
        }
       return false;
    }
};