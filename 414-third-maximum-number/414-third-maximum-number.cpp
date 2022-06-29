class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int ans=0;
        int count=1;
 
            int prev= nums[len-1];
            for(int i=len-1;i>=0;i--)
            {
                if(nums[i]!=prev)
                {
                    count++;
                    prev=nums[i];
                    
                }
                if(count==3)
                {
                    return nums[i];
                }
            }
            
      return nums[len-1];
        
    }
};