class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int len= nums.size();
        sort(nums.begin(),nums.end()); //first sort then
        int med=nums[len/2];  //take median 
        int i,count=0;
        for(i=0;i<len;i++)
        {
            count=count + abs(nums[i]-med);  //abs value of (nums[i]-med)
            
        }
        
        return count;
    }
};