class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int a=size(nums);
        for (int i=0;i<size(nums);i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                a--;
                i=i-1;
            }
       
        }
        
        return a;
    }
};