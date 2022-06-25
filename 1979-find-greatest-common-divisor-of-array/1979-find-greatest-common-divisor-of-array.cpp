class Solution {
public:
    int findGCD(vector<int>& nums) {
        int res=-1000000,n=nums.size();
        sort(nums.begin(),nums.end());
        int x=nums[0];
        int y=nums[n-1];
        for(int i=1;i<=nums[0];i++){
            if(x%i==0 && y%i==0){
                res=i;
            }
        }
        return res;
        
    }
};