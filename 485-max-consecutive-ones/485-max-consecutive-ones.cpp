class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0,value=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                sum++;
            }
            else{
                
                if(value<sum)  //value will track the highest sum
                {
                    value=sum;
                }
                sum=0;
            }
                if(value<sum)  //when there is last 1 so it will not go "else condition", here recheck
                {
                    value=sum;
                }
              
            
            
        }
        
        
        return value;
        
    }
};