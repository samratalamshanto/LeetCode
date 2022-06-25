class Solution {
public:
    int findGCD(vector<int>& nums) {
        int res=-1000000,n=nums.size();
        sort(nums.begin(),nums.end());
        int x=nums[0];  // first find the lowest of two value
        int y=nums[n-1];
        for(int i=1;i<=nums[0];i++){  //then loop over the limit to lowest value
            if(x%i==0 && y%i==0){ //if 2 value are divisible by i then set res=i
                res=i;
            }
        }
        return res;
        
    }
};