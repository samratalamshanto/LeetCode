class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       if(nums.size()==2) return nums;
        
        
        vector<int>ans;
        int i,j;
        
        //ans.push_back(nums[0]);
        i=0;
        j=n;
        
        while(j<nums.size())
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            
            i++;
            j++;
        }
        
        
        
        return ans;
    }
};