class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int len=nums.size();
        int ans=0;
        int count=1;
 
        int prev= nums[len-1]; //set prev value for comparing
        for(int i=len-1;i>=0;--i)
        {//first prev and nums[i] same, so --i  
            if(nums[i]!=prev)
            {
                count++;
                prev=nums[i];  //update prev

            }
            if(count==3)
            {
                return nums[i];
            }
        }
            
      return nums[len-1]; //otherwise give len-1
        
        //1 1 2 here example
        
    }
};