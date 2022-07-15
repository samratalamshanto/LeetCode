class Solution {
public:
    
    
    
    int search(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
    
        int res=-1;
       while(left<=right)
       {
           if(nums[left]==target) res=left;          
           left++;
          
           
       }
        
       
        return res;
    }
};