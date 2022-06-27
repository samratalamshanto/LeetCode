class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = ceil((nums.size())/2); //ceil()
        unordered_map<int,int>map;  //unordered_map 
        int i=0;
        while( i<nums.size())
        {
            map[nums[i]]++;  //count the value of the nums[i]
            if(map[nums[i]] > majority){  //condition check
                return nums[i];
            }
            i++;
        }
       
        
        return 0;
        
        
    }
};