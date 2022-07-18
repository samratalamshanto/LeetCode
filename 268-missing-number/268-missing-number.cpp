class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)  //if use <=n then missing last element nums[i] is invlaid, [0,1]: len=2 so nums[2] invalid.
        {
            if(j==nums[i] && j<=n)
            {
                j++;
            }
            
        }
        
        return j;
        
    }
};