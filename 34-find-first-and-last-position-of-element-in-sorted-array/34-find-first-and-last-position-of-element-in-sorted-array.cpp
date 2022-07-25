class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;
        int len=nums.size();
        
        if(len==0)
        {
            ans.assign({-1,-1});  // assign() used for multiple elements insertion
            return ans;
        }
        
        int low=0;
        int high=len-1;
        int flag_low=0;
        int flag_high=0;
        
        while(low<=high)  //low <= high bcz [1] 1---- [0,0]
        {
            if(nums[low]==target && flag_low==0) //flag used otherwise low insert multiple times
            {
                ans.push_back(low);
                flag_low=1; 
            }
            else if(nums[low]<target)
            {
                low++;
            } 
            else if(nums[high]==target && flag_high==0) //flag used otherwise high insert multiple times
            {
                ans.push_back(high);
                flag_high=1;
               
            }
            else if(nums[high]>target)
            {
                high--;
            }
            
            if(flag_low && flag_high)  //found low and high so break
            {
                break;
            }
        }
        if(ans.size()==0)
        {
            ans.assign({-1,-1});
        }
        
        
        
        
        return ans;
    }
};