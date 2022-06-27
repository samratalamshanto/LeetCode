class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = (nums.size())/2;
        unordered_map<int,int>map;
        int i=0;
        while( i<nums.size())
        {
            map[nums[i]]++;
            if(map[nums[i]] > majority){
                return nums[i];
            }
            i++;
        }
       
        
        return 0;
        
        
    }
};