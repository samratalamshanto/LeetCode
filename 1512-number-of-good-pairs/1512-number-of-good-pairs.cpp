class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int sum=0;

        for(int i=0;i<nums.size();i++){
            for(int j=nums.size()-1;j>=0;j--){
                if(i<j and i!=j and nums[i]==nums[j]){ 
      //i<j, i!=j, nums[i]= nums[j] 
                    sum+=1;
                    

                }
            }
        }
        
        return sum;
    }
};